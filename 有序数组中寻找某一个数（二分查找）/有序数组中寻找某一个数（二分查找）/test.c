#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = 15;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//学会运用求数组个数的公式
//	printf("%d\n", sz);
//	for (i = 0; i < sz; i++)
//	{
//		if (num == arr[i])
//		{
//			printf("能找到，下标为；%d\n", i);
//			break;
//			//注意加break
//		}
//	}
//		if (i == sz)
//			printf("找不到");
//	return 0;
//}
//遍历查找

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int num = 7;
	
	while (left <= right)
	{
		//int mid = (right + left) / 2; 容易溢出
		//如果多次用到可以写在外面
		int mid = left + (right - left) / 2;
		//不容易溢出
		//分别除以2再相加容易出错
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
			printf("找到了，下标为%d\n", mid);
			break;
		}

	}
	if(left>right)
		printf("找不到");
	return 0;
}
//二分查找
//一劳永逸