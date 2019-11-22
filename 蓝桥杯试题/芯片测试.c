#include<stdio.h>
#include<Windows.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	int n;
	scanf("%d", &n);
	int a[50][50];
	int i, j, s;
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (j = 0; j < n; j++)
	{
		s = 0;
		for (i = 0; i < n; i++)
		{
			s = s + a[j][i];
		}
		if (s>n / 2.0)
		{
			printf("%d ", j + 1);
		}
	}

	system("pause");
	return 0;
}