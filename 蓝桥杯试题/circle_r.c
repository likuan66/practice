//给定圆的半径r，求圆的面积。 
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define PI 3.14159265358979
int main()
{
	int r;
	printf("请输入一个整数表示圆的半径：\n");
	scanf("%d", &r);
	double s;
	s = PI*r*r;
	printf("%.7f\n", s);

	system("pause");
	return 0;
}