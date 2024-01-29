#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i1 = 1;
	while (i1 <= 100)
	{
		if (i1 % 2 == 1)
			printf("%d ", i1);
		i1++;
	}

	int i2 = 1;
	while (i2 <= 100)
	{
		printf("%d ", i2);
		i2+=2;
	}
	return 0;
}