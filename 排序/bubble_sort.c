#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define N 10

void bubble_sort(int a[], int n)
{
	int i, j; 
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
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
	int arr[N];
	printf("请输入十个元素：\n");
	int i,j;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	bubble_sort(arr, N);
	for (j = 0; j < N; j++)
	{
		printf("%d ", arr[j]);
	}
	system("pause");
	return 0;
}