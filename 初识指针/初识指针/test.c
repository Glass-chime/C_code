#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 10;//向内存申请四个字节来储存10
	//&a，取地址操作符
	//printf("%p\n", &a);//0111FDD8
	int* p = &a;  //p就是指针变量，存放地址的变量，p=&a
	
	char ch = 'w';
	char* pc = ch;
	printf("%p\n", pc);
	//*p,解引用操作符，意思是通过p中存放的地址，找到p所指向的对象，*p就是p所指的对象，即*p=a
	//地址不能随便改动

	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(float*));
	//指针变量的大小在32位平台上为4byte，在64位平台上为8byte


	//int* p1, p2, p3;//只有p1是指针变量，p2和p3都是整型
	//int *p1, *p2, *p3;//p1,p2,p3都是指针类型
	return 0;
}