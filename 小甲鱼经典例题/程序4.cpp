//��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int year, mounth, day;
	int data;
	int sum = 0;
	printf("���������ڣ�\n");
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
		printf("����������\n");
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
	printf("����%d��ĵ�%d�죡\n", year, sum);
	system("pause");
	return 0;
		
}