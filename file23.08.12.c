#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	printf("This is your first C language project program\n");

	int a = 5;
	int b = 0;
	int c = 1;
	scanf("$d", &a);
	for (b = 1;b <= a;b++)
	{

		c *= b;
	}

	printf("%d", c);

	return 0;
}

