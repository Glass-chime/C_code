#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>

//int main()
//{
//
//	int ret = 10;
//	while (1) 
//	{
//		printf("开始游玩（1/0）:>");
//		int io = 0;
//		scanf("%d", &io);
//		if (1 == io)
//		{
//			while (1)
//			{
//				int num = 0;
//				scanf("%d", &num);
//				if (num > ret)
//				{
//					printf("猜大了\n");
//					continue;
//				}
//				else if (num < ret)
//				{
//					printf("猜小了\n");
//					continue;
//				}
//				else
//				{
//					printf("猜对了\n");
//					break;
//				}
//			}
//		}
//		else
//		{
//			break;
//		}
//	}
//	
//	return 0;
//}
//无随机数自己设计的

void game()	
{
	int ret = rand()%100+1;
	//使ret包含从1到100的随机数
	//用rand不能得出很随机的随机数
	//要使用srand来规定sand的起点

	while (1)
	{
		int guess = 0;
		printf("请输入:>");
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("猜小了\n");
		}
		else if (ret < guess)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}

void menu()
{
	printf("**************************\n");
	printf("******* 1.开始游戏 *******\n");
	printf("******* 2.结束游戏 *******\n");
	printf("**************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//time函数输入空指针得到一个时间戳
	//用“（）”操作符强制规定time函数的返回值为无符号整型
	//在整个工程中只生成一次起点，否则随机数会不随机

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("进入游戏\n");
			game();
			break;
		case 2:
			printf("结束游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (2 != input);
	return 0;
}