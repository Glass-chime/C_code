#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

extern Add(int x, int y);
extern int g_val;
//ÉùÃ÷Íâ²¿·ûºÅ

int main()
{

	printf("%d\n", g_val);
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}