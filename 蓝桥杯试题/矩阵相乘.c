/*������ϰ ����˷�
�������� ����һ��N�׾���A�����A��M���ݣ�M�ǷǸ�������
 ���磺A =1 2
		��3 4
A��2����
		7 10
		15 22
�����ʽ		��һ����һ��������N��M��1<=N<=30, 0<=M<=5������ʾ����A�Ľ�����Ҫ�������
				������N�У�ÿ��N������ֵ������10�ķǸ���������������A��ֵ
�����ʽ
				�����N�У�ÿ��N����������ʾA��M��������Ӧ�ľ������ڵ���֮����һ���ո����
��������
		2 2
		1 2
		3 4
�������
	    7 10
		15 22*/
#include<stdio.h>
#include<Windows.h>
#include<string.h>
#pragma warning(disable:4996)
#define N 100
int A[N][N], t[N][N], r[N][N];
int main()
{
	int i, j, k, m, n;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		r[i][i] = 1;  //��r������λ��λ���󣬽��Խ��ߵ�Ԫ����λ1�����ǵ�λ����
	}
	while (m--)
	{
		memset(t, 0, sizeof(t));  //��t������Ԫ����Ϊ0
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				for (k = 0; k < n; k++)
				{
					t[i][j] += r[i][k] * A[k][j]; //��r�ĵ�i��Ԫ����A��k��Ԫ����ˣ�����t
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				r[i][j] = t[i][j]; //��t��Ԫ�طŵ�r�У�Ϊ���þ����m��
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", r[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
