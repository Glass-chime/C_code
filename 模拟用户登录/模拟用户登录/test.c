#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{
//	int i = 0;
//	int a = 2;
//	for (i = 0; i < 3; i++)
//	{
//		int passward = 0;
//		printf("����������:>");
//		scanf("%d", &passward);
//		if (123 == passward)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			if (0 != a)
//			{
//				printf("���󣬻���%d�λ���\n", a);
//				a--;
//			}
//			else
//				printf("�˳�����");
//		}
//	}
//}

int main()
{
	int i = 0;
	char passward[20] = { 0 };//�ַ����ĳ�ʼ���Ӵ�����
	for (i = 0; i < 3; i++)
	{
		if (strcmp(passward, "abcdef") == 0)
		//�Ƚ������ַ�����Ȳ���ʹ�á�==������Ӧ��ʹ��һ���⺯����strcmp
		//�������0�����ʾ�ַ������
		{
			printf("��½�ɹ�/n");
			break;
		}
	}
	if (3 == i)
	{
		printf("�����������������˳�����");
	}
	return 0;
}