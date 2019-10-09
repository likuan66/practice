#include<stdio.h>
#include<Windows.h>

void quik_sort(int array[], int left, int right)
{
	int i = left, j = right;
	int temp;
	int pivot;//中心点
	pivot = array[(left + right) / 2];//让中心的等于中间元素
	while (i <= j)
	{
		//从左到右找到大于等于中心点的数
		while (array[i] < pivot)
		{
			i++;
		}
		//从右到左找到小于等于中心点的数
		while (array[j]> pivot)
		{
			j--;
		}
		if (i <= j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
	}
	if (left < j)
	{
		quik_sort(array, left, j);
	}
	if (i < right)
	{
		quik_sort(array, i, right);
	}
}
int main()
{
	int array[] = { 10, 2, 3, 8, 5, 9, 6, 7, 1, 0,};
	int i, length;

	length = sizeof(array) / sizeof(array[0]);//计算数组中元素的个数
	quik_sort(array, 0, length - 1);

	printf("排序后的结果是：");
	for (i = 0; i < length; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}