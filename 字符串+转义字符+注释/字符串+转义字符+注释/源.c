#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�ַ���
//���н����ͬ��ԭ��printf��ӡ��/0���ͣ��
int main()
{
	char ch[] = "abcdef";  //���߿���дΪ char ch[10] = "abcdef";
	char arr1[] = { "abcdef" };
	char arr2[] = { 'a','b','c','d','e','f','\0'};
	
	char passward[20] = { 0 };
	scanf("%s", passward);
	//���Զ�����/0

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", passward);
	return 0;
}