#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void test()
{
	static int a = 1;
	a++;
	printf("%d\n", a);
}
//�ֲ������߳�����������
//static���ξֲ��������ֲ������߳������򲻱�����
//������static���ξֲ�������ʱ��ı��˱����Ĵ洢λ��

int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}