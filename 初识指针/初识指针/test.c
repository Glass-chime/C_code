#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 10;//���ڴ������ĸ��ֽ�������10
	//&a��ȡ��ַ������
	//printf("%p\n", &a);//0111FDD8
	int* p = &a;  //p����ָ���������ŵ�ַ�ı�����p=&a
	
	char ch = 'w';
	char* pc = ch;
	printf("%p\n", pc);
	//*p,�����ò���������˼��ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����p��ָ�Ķ��󣬼�*p=a
	//��ַ�������Ķ�

	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(float*));
	//ָ������Ĵ�С��32λƽ̨��Ϊ4byte����64λƽ̨��Ϊ8byte


	//int* p1, p2, p3;//ֻ��p1��ָ�������p2��p3��������
	//int *p1, *p2, *p3;//p1,p2,p3����ָ������
	return 0;
}