#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{
//	int i = 0;
//	int a = 2;
//	for (i = 0; i < 3; i++)
//	{
//		int passward = 0;
//		printf("请输入密码:>");
//		scanf("%d", &passward);
//		if (123 == passward)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			if (0 != a)
//			{
//				printf("错误，还有%d次机会\n", a);
//				a--;
//			}
//			else
//				printf("退出程序");
//		}
//	}
//}

int main()
{
	int i = 0;
	char passward[20] = { 0 };//字符串的初始化加大括号
	for (i = 0; i < 3; i++)
	{
		if (strcmp(passward, "abcdef") == 0)
		//比较两个字符串相等不能使用“==”，而应该使用一个库函数：strcmp
		//如果返回0，则表示字符串相等
		{
			printf("登陆成功/n");
			break;
		}
	}
	if (3 == i)
	{
		printf("三次密码均输入错误，退出程序");
	}
	return 0;
}