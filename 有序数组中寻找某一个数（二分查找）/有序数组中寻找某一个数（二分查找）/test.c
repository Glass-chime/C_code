#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = 15;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ѧ����������������Ĺ�ʽ
//	printf("%d\n", sz);
//	for (i = 0; i < sz; i++)
//	{
//		if (num == arr[i])
//		{
//			printf("���ҵ����±�Ϊ��%d\n", i);
//			break;
//			//ע���break
//		}
//	}
//		if (i == sz)
//			printf("�Ҳ���");
//	return 0;
//}
//��������

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int num = 7;
	
	while (left <= right)
	{
		//int mid = (right + left) / 2; �������
		//�������õ�����д������
		int mid = left + (right - left) / 2;
		//���������
		//�ֱ����2��������׳���
			if (num > arr[mid])
		{
			left = mid + 1;
			continue;
		}
		else if (num < arr[mid])
		{
			right = mid - 1;
			continue;
		}
		else
		{
			num = arr[mid];
			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
			break;
		}

	}
	if(left>right)
		printf("�Ҳ���");
	return 0;
}
//���ֲ���
//һ������