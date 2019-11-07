#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)


void Merge(int arr[], int left, int mid, int right)
{
	int aux[10] = { 0 };//定义一个临时数组
	int i; //第一个数组的索引
	int j;  //第二个数组的索引
	int k;  //临时数组的索引
	for (i = left, j = mid + 1, k = 0; k <= right - left; k++)
	{
		if (i == mid + 1)
		{
			aux[k] = arr[j++];
			continue;
		}
		if (j == right + 1)
		{
			aux[k] = arr[i++];
			continue;
		}
		if (arr[i] < arr[j])
		{
			aux[k] = arr[i++];
		}
		else
		{
			aux[k] = arr[j++];
		}
	}
	for (i = left, j = 0; i <= right; i++, j++)
	{
		arr[i] = aux[j];
	}

}

void Merge_sort(int a[], int left, int right)
{
	while (left < right)
	{
		int mid = (left + right) / 2;
		Merge_sort(a, left, mid);
		Merge_sort(a, mid + 1, right);
		Merge(a, left, mid, right);
	}
}

int main()
{
	int arr[10];
	printf("请输入要排序的10个整数：\n");
	int i, j;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	Merge_sort(arr, 0, 9);
	for (j = 0; j < 10; j++)
	{
		printf("%d ", arr[j]);
	}
	system("pause");
	return 0;
}