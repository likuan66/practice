//��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int score;
	char grade;
	printf("������ѧ���ɼ���\n");
	scanf("%d", &score);
	grade = score >= 90 ? 'A' : (score >= 60 ? 'B' : 'C');
	printf("%d-----%c\n", score, grade);
	system("pause");
	return 0;
}