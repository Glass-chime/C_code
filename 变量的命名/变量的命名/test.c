#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int test()
{
	int c = 1;
	if (c == 1)//дΪif (1 == c)��Ϊ��ȫ
		return 1;
	return 0;//��ǰ�����else���ӹ淶
}

int main()
{
	int firstname[20] = { 0 };
	int first_name[20] = { 0 };
	int FirstName[20] = { 0 };
	//����Խ�淶Խ����Խ��

	int a=0;
	int b = 0;
	//���ɹ淶��ʽ��ϰ��

	int r = test();
	printf("%d\n", r);


	return 0;
}