#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int flag = 0;
//	if (!flag)
//	{
//		printf("真");
//	}
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	int b = +a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//占位符%d在格式化输入输出中代表int(4bytes）%ld代表long int（>=4bytes）%lld代表long long int (8bytes)
//	int arr[10] = { 0 };
//	printf("%lld\n", sizeof(arr));
//	printf("%lld\n", sizeof(arr[0]));
//	printf("%lld\n", sizeof(arr) / sizeof(arr[0]));
//	printf("%lld\n", sizeof(int));
//	return 0;
//}

//int main() {
//	int a = 10;
//	int b = a++;
//	//后置++，先使用，再++
//	int c = ++a;
//	//前置++，先加加，后使用
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	//--同理
//	return 0;
//}

//int main()
//{
//	//字面浮点数，编译器默认理解为double类型，eg：3.14
//	int a = (int)3.14;
//	//强制类型转换，取整数位
//	printf("%d\n", a);
//	return 0;
//}