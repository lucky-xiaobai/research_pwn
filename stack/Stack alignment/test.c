#include<stdio.h>
#include<string.h>

void heiheihei()
{
	puts("Congratulations on getting the shell");
	puts("Author: vi0let ----a rookie in the team");
	system("/bin/sh");
}

int init() 
{
	setbuf(stdin,0);
	setbuf(stdout,0);
	setbuf(stderr,0);
}

void backdoor()
{
	puts("You little smart guy, not here, still have to look for oh");
}

void sub_0111101()
{
	char s[120];
	gets(s);
}

int main()
{
	init();
	printf("Hello,welcome to the world of pwn ヾ(≧▽≦*)o\n");
	sub_0111101();
	// heiheihei();
	return 0;
}

//gcc -g -z execstack -fno-stack-protector -no-pie -z lazy test.c -o test