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
//		printf("��ʼ���棨1/0��:>");
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
//					printf("�´���\n");
//					continue;
//				}
//				else if (num < ret)
//				{
//					printf("��С��\n");
//					continue;
//				}
//				else
//				{
//					printf("�¶���\n");
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
//��������Լ���Ƶ�

void game()	
{
	int ret = rand()%100+1;
	//ʹret������1��100�������
	//��rand���ܵó�������������
	//Ҫʹ��srand���涨sand�����

	while (1)
	{
		int guess = 0;
		printf("������:>");
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("��С��\n");
		}
		else if (ret < guess)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
}

void menu()
{
	printf("**************************\n");
	printf("******* 1.��ʼ��Ϸ *******\n");
	printf("******* 2.������Ϸ *******\n");
	printf("**************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//time���������ָ��õ�һ��ʱ���
	//�á�������������ǿ�ƹ涨time�����ķ���ֵΪ�޷�������
	//������������ֻ����һ����㣬����������᲻���

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("������Ϸ\n");
			game();
			break;
		case 2:
			printf("������Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (2 != input);
	return 0;
}