#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

void Insertion_sort(int a[], int m)
{
	int i,j;
	int temp;
	for (i = 1; i < m; i++)//执行m-1趟的插入
	{
		if (a[i]<a[i - 1])//如果前边元素比前边的大
		{
			temp = a[i];  //将后边 的元素放到一个中间变量中
			for (j = i - 1; a[j]>temp; j--)//取出元素后将剩下元素依次往后移
			{
				a[j + 1] = a[j];
			}
			a[j + 1] = temp;//再将这个元素插入指定的位置
		}
	}
}

int main()
{
	int a[20];
	printf("请输入10个有序的数：\n");
	int i, j;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	
	Insertion_sort(a, 10);
	for (j = 0; j < 10; j++)
	{
		printf("%d ", a[j]);
	}
	system("pause");
	return 0;
}