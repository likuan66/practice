#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int m;
	scanf("%d", &m);
	int i, j;
	int a[100][100];
	for (i = 0; i < m; i++)
	{
		a[i][i] = 1;
		a[i][0] = 1;
	}
	for (i = 2; i < m; i++)
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}