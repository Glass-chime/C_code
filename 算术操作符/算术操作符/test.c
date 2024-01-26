#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 7/2;
	int b = 7%2;
	//取模即取余数
	//取模操作符两端只能是整数
	float c = 7 / 2.0;
	//除号的两端都是整数的时候，执行整数除法
	//除号的两端至少有一个浮点数时，执行浮点数除法
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%f\n", c);
	printf("%.1f\n", c);//.1代表小数点后保留一位
	printf("%.2f\n", c);//.2代表小数点后保留两位

	return 0;
}

