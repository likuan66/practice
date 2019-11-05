#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

void quick_sort(int a[], int left, int right)
{
	if (left >= right)//如果左边的值大于右边的值说明已经完成了一组的执行
	{
		return;
	}
	int temp = a[left];//将第一个元素设为对比元素（参考值）
	int i = left;
	int j = right;
	while (i < j)
	{

		while (i<j && a[j]>temp)//如果这个参考值小于右边所比较的元素，则j--，进行右边的下一个元素与参考值比较
		{
			j--;
		}
		a[i] = a[j];  //找到了一个比参考值小的数，把这个数放在前面  （原来取参考值的位置）
		while (i <j && a[i] <= temp)//如果参考值大于等于右边所比较的元素，则i++；进行下一个元素与参考值的比较
		{
			i++;
		}
		a[j] = a[i];  //找到了一个比参考值大的数，把这个数放到后面（刚刚放再前面那个数的位置）
	}
	a[i] = temp;   //当在当组内找完一遍以后就把中间数temp回归
	quick_sort(a, left, i - 1);  //最后用同样的方式对分出来的左边的小组进行同上的做法
	quick_sort(a, j + 1, right);  //用同样的方式对分出来的右边的小组进行同上的做法
	
}

int main()
{
	int arr[10];
	printf("请输入 要排序的十个数：\n");
	int i, j;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	quick_sort(arr, 0, 9);
	for (j = 0; j < 10; j++)
	{
		printf("%d ", arr[j]);
	}

	system("pause");
	return 0;
}