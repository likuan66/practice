/*给定一个N阶矩阵A，输出A的M次幂（M是非负整数）
例如：
A =
1 2
3 4
A的2次幂
7 10
15 22*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

void print(int c[100][100], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}

void chenfa(int a[100][100], int b[100][100], int c[100][100], int n, int m)
{
	int p,i,j,k;
	for (p = 2; p <= m; p++)//控制几次相乘
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				int t = 0;
				for (k = 0; k < n; k++)
				{
					t += a[i][k] * b[k][j];//行元素*列元素结果相加给t，这里总共要执行n*n次
					c[i][j] = t;
				}
			}
		}
	}
}
int main()
{
	int m, n;
	int a[100][100] = { 0 }, b[100][100] = { 0 }, c[100][100] = { 0 };
	printf("请输入两位整数，一个表示矩阵的行列，一个表示矩阵的多少次幂：\n");
	scanf("%d%d", &n, &m);
	int i, j;
	printf("请输入一个n*n的矩阵：\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	
	}
	//记录矩阵
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			b[i][j] = a[i][j];
		}
	}
	if (m == 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					c[i][j] = 1;
				}
			}
		}
		printf("n的0次幂是：\n");
		print(c, n);
	}
	else if (m == 1)
	{
		printf("n的1次幂是：\n");
		print(a, n);
	}
	else
	{
		chenfa(a, b, c, n, m);
		printf("n的m次幂是：\n");
		print(c, n);
	}


	system("pause");
	return 0;
}