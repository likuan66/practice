//��Ŀ����дinput()��output()�������룬���5��ѧ�������ݼ�¼��
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define N 5

struct Student
{
	char name[20];
	int age[20];
	int sno[40];
}stu[N];
void input()
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		printf("�������%dλѧ����������\n",i+1);
		scanf("%s", &stu[i].name);
		printf("�������%dλѧ�������䣺\n",i+1);
		scanf("%d", &stu[i].age);
		printf("�������%dλѧ����ѧ�ţ�\n",i+1);
		scanf("%d", &stu[i].sno);
	}
	printf("-----------------\n");
}
void output()
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		printf("��%dλѧ����������%s\n", i + 1, stu[i].name);
		printf("��%dλѧ����������%d\n", i + 1, stu[i].age);
		printf("��%dλѧ����ѧ����%d\n", i + 1, stu[i].sno);
	}
	printf("-------------\n");
}
int main()
{
	input();
	output();

	system("pause");
	return 0;
}