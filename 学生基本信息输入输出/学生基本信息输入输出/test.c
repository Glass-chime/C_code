#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int id = 0;
	float arr1 = 0.0f;
	float arr2 = 0.0f;
	float arr3 = 0.0f;
	//��������ʼ��
	//0.0Ϊdouble���͵ĳ�ʼ��
	//0.0fΪfloat���͵ĳ�ʼ��
	scanf("%d;%f,%f,%f", &id, &arr1, &arr2, &arr3);
	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, arr1, arr2, arr3);
	//float������λС�� %.2f
	return 0;
}