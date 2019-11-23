/*问题描述
　　回形取数就是沿矩阵的边取数，若当前方向上无数可取或已经取过，则左转90度。一开始位于矩阵左上角，方向向下。
输入格式
　　输入第一行是两个不超过200的正整数m, n，表示矩阵的行和列。接下来m行每行n个整数，表示这个矩阵。
输出格式
　　输出只有一行，共mn个数，为输入矩阵回形取数得到的结果。数之间用一个空格分隔，行末不要有多余的空格。*/
#include<stdio.h>
#include<Windows.h>
#include<string.h>
#pragma warning(disable:4996)
#define MAX_N 200
int m, n;
int a[MAX_N][MAX_N], b[MAX_N][MAX_N];
int s = 0;

void solve(int i, int j)
{
	if (i >= 0 && i < m&&j >= 0 && j < n&&b[i][j] == 0)
	{
		printf("%d ", a[i][j]);
		b[i][j] = 1;
	}
	else
	{
		s++;
		return;
	}
	if (s % 4 == 0)
	{
		solve(i + 1, j);
	}
	if (s % 4 == 1)
	{
		solve(i, j + 1);
	}
	if (s % 4 == 2)
	{
		solve(i - 1, j);
	}
	if (s % 4 == 3)
	{
		solve(i, j - 1);
	}
	if (s % 4 == 0)
	{
		solve(i + 1, j);
	}
	if (s % 4 == 1)
	{
		solve(i, j + 1);
	}
	if (s % 4 == 2)
	{
		solve(i - 1, j);
	}
	if (s % 4 == 3)
	{
		solve(i, j - 1);
	}
	return;
}
int main()
{
	memset(b, 0, sizeof(b));
	scanf("%d%d", &m, &n);
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	solve(0, 0);
	system("pause");
	return 0;
}