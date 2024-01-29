#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int day = 0;
	int n = 1;
	scanf("%d", &day);

	switch (day)//此处必须是整型
	{
	case 1://case与数字之间有空格
	//case后为整型常量表达式
	//错误写法：“case 1.0”、“case n”
	//case后也可以为字符，如“case 'a':”,因为字符以其ASCII值来储存所以也算整型常量
	//错误写法：case(1,2,3,4...)
	//错误写法：case (day<6):若为真，则表达式为1；若为假，则表达式为0

		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
		break;//最后一个break最好加上，为了拓展
	default:
		printf("写入错误\n");
		break;
	}

	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:
		printf("写入错误\n");
		break;
	}

	return 0;
 }