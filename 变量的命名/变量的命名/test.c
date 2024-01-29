#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int test()
{
	int c = 1;
	if (c == 1)//写为if (1 == c)更为安全
		return 1;
	return 0;//在前面加上else更加规范
}

int main()
{
	int firstname[20] = { 0 };
	int first_name[20] = { 0 };
	int FirstName[20] = { 0 };
	//命名越规范越清晰越好

	int a=0;
	int b = 0;
	//养成规范格式的习惯

	int r = test();
	printf("%d\n", r);


	return 0;
}