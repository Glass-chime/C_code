#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//字符串
//运行结果不同的原因：printf打印到/0后会停下
int main()
{
	char ch[] = "abcdef";  //或者可以写为 char ch[10] = "abcdef";
	char arr1[] = { "abcdef" };
	char arr2[] = { 'a','b','c','d','e','f','\0'};
	
	char passward[20] = { 0 };
	scanf("%s", passward);
	//会自动补齐/0

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", passward);
	return 0;
}