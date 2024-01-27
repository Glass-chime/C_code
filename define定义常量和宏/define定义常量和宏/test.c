#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define NUM 100
#define ADD(x,y) ((x)+(y))

int main()
{
	
	int n = NUM;
	int arr[NUM] = { 0 };
	printf("%d\n", NUM);
	printf("%d\n",n);
	printf("%d\n", arr[0]);
	
	int a = 10;
	int b = 20;
	int c = ADD(a, b);
	printf("%d\n", c);

	return 0;
}