#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int id = 0;
	float arr1 = 0.0f;
	float arr2 = 0.0f;
	float arr3 = 0.0f;
	//浮点数初始化
	//0.0为double类型的初始化
	//0.0f为float类型的初始化
	scanf("%d;%f,%f,%f", &id, &arr1, &arr2, &arr3);
	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, arr1, arr2, arr3);
	//float保留两位小数 %.2f
	return 0;
}