/*��������
��������ȡ�������ؾ���ı�ȡ��������ǰ������������ȡ���Ѿ�ȡ��������ת90�ȡ�һ��ʼλ�ھ������Ͻǣ��������¡�
�����ʽ
���������һ��������������200��������m, n����ʾ������к��С�������m��ÿ��n����������ʾ�������
�����ʽ
�������ֻ��һ�У���mn������Ϊ����������ȡ���õ��Ľ������֮����һ���ո�ָ�����ĩ��Ҫ�ж���Ŀո�*/
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