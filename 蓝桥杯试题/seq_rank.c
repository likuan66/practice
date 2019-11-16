//给定一个长度为n的数列，将这个数列按从小到大的顺序排列。1<=n<=200
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

void seq_rank(int a[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <n-i; j++)
		{
			if (a[j]>a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int i = 0;
	int arr[10000];
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	seq_rank(arr, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}