#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define N 10

void selection_sort(int a[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main()
{
	int arr[N];
	printf("请输入要排序的十个元素：\n");
	int i, j;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	selection_sort(arr, N);
	for (j = 0; j < N; j++)
	{
		printf("%d ", arr[j]);
	}
	system("pause");
	return 0;
}