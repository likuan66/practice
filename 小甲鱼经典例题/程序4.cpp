//题目：输入某年某月某日，判断这一天是这一年的第几天？
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int year, mounth, day;
	int data;
	int sum = 0;
	printf("请输入日期：\n");
	scanf("%d-%d-%d", &year,&mounth, &day);
	switch (mounth)
	{
	case 1:
		sum = 0;
		break;
	case 2:
		sum = 31 ;
		break;
	case 3:
		sum = 31 + 28 ;
		break;
	case 4:
		sum = 31 + 28 + 31 ;
		break;
	case 5:
		sum = 31 + 28 + 31 + 30 ;
	case 6:
		sum = 31 + 28 + 31 + 30 + 31 ;
		break;
	case 7:
		sum = 31 + 28 + 31 + 30 + 31 + 30 ;
		break;
	case 8:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 ;
		break;
	case 9:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 ;
		break;
	case 10:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 ;
		break;
	case 11:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 ;
		break;
	case 12:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 ;
		break;
	default :
		printf("你输入有误！\n");
		break;
	}
	if (year % 4 == 0 && year % 400 != 0 || year % 400 == 0)
	{
		sum = sum + 1 + day;
	}
	else
	{
		sum = sum + day;
	}
	printf("这是%d年的第%d天！\n", year, sum);
	system("pause");
	return 0;
		
}