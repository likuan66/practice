//题目：打印出如下图案（菱形）
#include<stdio.h>
#include<Windows.h>
#define M 6
int main()
{
	int i, j, k;
	for (i = 1; i <= M; i++)
	{
		for (j = M; j >i; j--)
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= M; i++)
	{
		for (j = i; j >= 1; j--)
		{
			printf(" ");
		}
		for (k = 2*(M-i)-1; k >=1 ; k--)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}