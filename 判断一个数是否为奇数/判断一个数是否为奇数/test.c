#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int a = 0;
	scanf("%d", &a);//����/n��������Ҳû��
	if (1 == a % 2)
		printf("����");
	else
		printf("ż��");
	return 0;
}