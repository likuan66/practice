/*����һ��N�׾���A�����A��M���ݣ�M�ǷǸ�������
���磺
A =
1 2
3 4
A��2����
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
	for (p = 2; p <= m; p++)//���Ƽ������
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				int t = 0;
				for (k = 0; k < n; k++)
				{
					t += a[i][k] * b[k][j];//��Ԫ��*��Ԫ�ؽ����Ӹ�t�������ܹ�Ҫִ��n*n��
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
	printf("��������λ������һ����ʾ��������У�һ����ʾ����Ķ��ٴ��ݣ�\n");
	scanf("%d%d", &n, &m);
	int i, j;
	printf("������һ��n*n�ľ���\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	
	}
	//��¼����
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
		printf("n��0�����ǣ�\n");
		print(c, n);
	}
	else if (m == 1)
	{
		printf("n��1�����ǣ�\n");
		print(a, n);
	}
	else
	{
		chenfa(a, b, c, n, m);
		printf("n��m�����ǣ�\n");
		print(c, n);
	}


	system("pause");
	return 0;
}