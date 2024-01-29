#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int a = 0;
	scanf("%d", &a);//不加/n，但加上也没错
	if (1 == a % 2)
		printf("奇数");
	else
		printf("偶数");
	return 0;
}