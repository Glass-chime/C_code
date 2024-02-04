#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "##################";
	char arr2[] = "welcome to beijing";
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0])-1;
	//sizeof会计算字符串中的“/0”
	for (i = 0; i <= sz/2; i++)
	{
		printf("%s\n", arr1);
		arr1[i] = arr2[i];
		arr1[sz - (i+1)] = arr2[sz - (i+1)];
		Sleep(1000);
		system("cls");
		//system是一个库函数，用来实现系统命令
	}
	printf("%s\n", arr1);
	return 0;
}