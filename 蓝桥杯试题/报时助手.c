#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void printtime(int n)
{
	switch (n)
	{
	case 0:
		printf("zero");
		break;
	case 1:
		printf("one");
		break;
	case 2:
		printf("tow");
		break;
	case 3:
		printf("three");
		break;
	case 4:
		printf("four");
		break;
	case 5:
		printf("five");
		break;
	case 6:
		printf("six");
		break;
	case 7:
		printf("seven");
		break;
	case 8:
		printf("enight");
		break;
	case 9:
		printf("nine");
		break;
	case 10:
		printf("ten");
		break;
	case 11:
		printf("eleven");
		break;
	case 12:
		printf("twelve");
		break;
	case 13:
		printf("thirteen");
		break;
	case 14:
		printf("fourteen");
		break;
	case 15:
		printf("fifteen");
		break;
	case 16:
		printf("sixteen");
		break;
	case 17:
		printf("seventeen");
		break;
	case 18:
		printf("enighteen");
		break;
	case 19:
		printf("nineteen");
		break;
	case 20:
		printf("twenty");
		break;
	default :
		if (n < 40)
		{
			printf("thirty");
		}
		else if (n < 50)
		{
			printf("forty");
		}
		else if (n < 60)
		{
			printf("fifty");
		}
		break;
	}
	return;
}
int main()
{
	int h, m;
	scanf("%d%d", &h, &m);
	//输出小时
	if (h > 20)
	{
		printtime(20);
		printf(" ");
		printtime(h %10);
		printf(" ");
	}
	else
	{
		printtime(h);
		printf(" ");
	}
	//输出分钟
	if (m)
	{
		if (m > 20)
		{
			printtime(m / 10 * 10);
			printf(" ");
			printtime(m % 10);
			printf(" ");
		}
		else
		{
			printtime(m);
		}
	}
	else
	{
		printf("o'clock");
	}
	printf("\n");

	system("pause");
	return 0;
}