#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//int ch = getchar();
	////��ʼ��,getchar����
	////�á�int������Ϊ������մ���getchar�᷵��EOF����EOF��#define�������-1��������int������
	//printf("%c\n", ch);
	////printf��ӡ
	//putchar(ch);
	////putchar��ӡ


	//int ch = 0;
	//while ((ch = getchar()) != EOF)//��һ����ĸѭ�����Σ���һ�ν�����ĸ���ڶ��ν���\n
	//	printf("%c", ch);
	////��ctrl+z�˳�����


	char passward[20] = { 0 };
	printf("����������:>");
	scanf("%s", passward);//�����passward��������Ҳ�ǵ�ַ
	//scanfȡ���ո�ͻ�����뻺����ֹͣȡ��
	//getchar();//������뻺��������ֻ�ܴ����뻺������ȡһ���ַ�,�������������д��
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	//������뻺����

	printf("��ȷ������(Y/N):>");
	int ret = getchar();
	//if (ret == 'Y')
	//	printf("��ȷ��");
	//else
	//	printf("��ȡ��");
	switch (ret)
	{
	case 'Y':
		printf("��ȷ��");
		break;
	case 'N':
		printf("��ȡ��");
		break;
	default:
		printf("�������");
		break;
	}

	return 0;
}