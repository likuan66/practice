//题目：编写input()和output()函数输入，输出5个学生的数据记录。
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
		printf("请输入第%d位学生的姓名：\n",i+1);
		scanf("%s", &stu[i].name);
		printf("请输入第%d位学生的年龄：\n",i+1);
		scanf("%d", &stu[i].age);
		printf("请输入第%d位学生的学号：\n",i+1);
		scanf("%d", &stu[i].sno);
	}
	printf("-----------------\n");
}
void output()
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		printf("第%d位学生的姓名是%s\n", i + 1, stu[i].name);
		printf("第%d位学生的年龄是%d\n", i + 1, stu[i].age);
		printf("第%d位学生的学号是%d\n", i + 1, stu[i].sno);
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