#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 1;
	while (i <= 10)
	{
		//if (5 == i) 
		//	break;  //break的用法，打印一到四
		//  continue;  //continue的用法，打印一到四后死循环，跳过本次循环
		printf("%d ", i);
		i++;
	}
	return 0;
}
//打印数字一到十