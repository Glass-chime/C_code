#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 7/2;
	int b = 7%2;
	//ȡģ��ȡ����
	//ȡģ����������ֻ��������
	float c = 7 / 2.0;
	//���ŵ����˶���������ʱ��ִ����������
	//���ŵ�����������һ��������ʱ��ִ�и���������
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%f\n", c);
	printf("%.1f\n", c);//.1����С�������һλ
	printf("%.2f\n", c);//.2����С���������λ

	return 0;
}

