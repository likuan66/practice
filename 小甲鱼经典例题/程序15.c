//题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int score;
	char grade;
	printf("请输入学生成绩：\n");
	scanf("%d", &score);
	grade = score >= 90 ? 'A' : (score >= 60 ? 'B' : 'C');
	printf("%d-----%c\n", score, grade);
	system("pause");
	return 0;
}