/*��������
�������FJΪ������ţ�ǿ�������ѧ�����Σ�FJ֪����Ҫѧ�����ſΣ�������һ���õ���
�Ǻ�����������������׼������ţ����һ����Sine֮�衱����Ϸ��Ԣ�����֣������ţ��
�ļ���������*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void printA(int n, int k)
{
	if (n == k)
	{
		printf("sin(%d)", n);
	}
	else
	{
		printf("sin(%d", n);
		printf(n % 2 == 0 ? "+" : "-");
		printA(n + 1, k);
		printf(")");
	}
}
void prints(int n, int k)
{
	if (n == 1)
	{
		printA(1, n);
		printf("+%d", k - n);
	}
	else
	{
		printf("(");
		prints(n - 1, k);
		printf(")");
		printA(1, n);
		printf("+%d", k - n);
	}
}
int main()
{
	int N;
	scanf("%d", &N);
	prints(N, N + 1);
	printf("\n");
	system("pause");
	return 0;
}