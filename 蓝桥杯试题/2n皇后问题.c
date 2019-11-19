/*问题描述
　　给定一个n*n的棋盘，棋盘中有一些位置不能放皇后。现在要向棋盘中放入n个黑皇后
和n个白皇后，使任意的两个黑皇后都不在同一行、同一列或同一条对角线上，任意的两
个白皇后都不在同一行、同一列或同一条对角线上。问总共有多少种放法？n小于等于8。
输入格式*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int sum = 0;

int p(int n, int x, int y, int m[][8], int s)
{
	int i, j;
	for (i = x - 1; i >= 0; i--)
	{
		if (m[i][y] == s)return 0;
	}
	for (i = x - 1, j = y - 1; i >= 0 && j >= 0; i--, j--)
	{
		if (m[i][j] == s)return 0;
	}
	for (i = x - 1, j = y + 1; i >= 0 && j<n; i--, j++)
	{
		if (m[i][j] == s)return 0;
	}
	return 1;
}

int h(int n, int x, int m[][8], int s)
{
	int i;
	if (x == n)
	{
		if (s == 2)h(n, 0, m, 3);
		else sum++;
		return 0;
	}
	for (i = 0; i<n; i++)
	{
		if (m[x][i] != 1)continue;
		if (p(n, x, i, m, s))m[x][i] = s;
		else continue;
		h(n, x + 1, m, s);
		m[x][i] = 1;
	}
	return 0;
}

int main()
{
	int n,a[8][8];
	scanf("%d", &n);
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	h(n, 0, a, 2);
	printf("%d", sum);
	system("pause");
	return 0;
}