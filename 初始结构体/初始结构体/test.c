#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct stu
{
	char name[20];
	int age;
	char sex[10];
	char tele[20];
};

void print(struct stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
	//��->�����������ṹ��ָ�����->�ṹ���Ա��
}
int main()
{
	struct stu s = { "zhangsan", 18, "nan", "13333333333" };
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	//��.�����������ṹ�������.�ṹ���Ա��
	print(&s);
	return 0;
}