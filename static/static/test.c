#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void test()
{
	static int a = 1;
	a++;
	printf("%d\n", a);
}
//局部变量走出作用域被销毁
//static修饰局部变量，局部变量走出作用域不被销毁
//本质上static修饰局部变量的时候改变了变量的存储位置

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