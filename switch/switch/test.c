#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int day = 0;
	int n = 1;
	scanf("%d", &day);

	switch (day)//�˴�����������
	{
	case 1://case������֮���пո�
	//case��Ϊ���ͳ������ʽ
	//����д������case 1.0������case n��
	//case��Ҳ����Ϊ�ַ����硰case 'a':��,��Ϊ�ַ�����ASCIIֵ����������Ҳ�����ͳ���
	//����д����case(1,2,3,4...)
	//����д����case (day<6):��Ϊ�棬����ʽΪ1����Ϊ�٣�����ʽΪ0

		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;//���һ��break��ü��ϣ�Ϊ����չ
	default:
		printf("д�����\n");
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
		printf("д�����\n");
		break;
	}

	return 0;
 }