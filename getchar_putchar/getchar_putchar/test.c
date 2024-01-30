#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//int ch = getchar();
	////初始化,getchar接收
	////用“int”是因为如果接收错误getchar会返回EOF，而EOF是#define所定义的-1，所以用int更合适
	//printf("%c\n", ch);
	////printf打印
	//putchar(ch);
	////putchar打印


	//int ch = 0;
	//while ((ch = getchar()) != EOF)//打一个字母循环两次，第一次接收字母，第二次接收\n
	//	printf("%c", ch);
	////按ctrl+z退出程序


	char passward[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", passward);//这里的passward是数组名也是地址
	//scanf取到空格就会从输入缓存区停止取用
	//getchar();//清空输入缓存区，但只能从输入缓存区拿取一个字符,不建议采用这种写法
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	//清空输入缓存区

	printf("请确认密码(Y/N):>");
	int ret = getchar();
	//if (ret == 'Y')
	//	printf("已确认");
	//else
	//	printf("已取消");
	switch (ret)
	{
	case 'Y':
		printf("已确认");
		break;
	case 'N':
		printf("已取消");
		break;
	default:
		printf("输入错误");
		break;
	}

	return 0;
}