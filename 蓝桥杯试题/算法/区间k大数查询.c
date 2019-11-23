/*问题描述
给定一个序列，每次询问序列中第l个数到第r个数中第K大的数是哪个。*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int Sqilt(int *data, int left, int right)  //快速排序的方法
{
	int value = data[left];  //随便取出一个数，比如取出第一个数放在value变量中
	while (left < right)
	{
		while (data[right] >= value&&left < right)  //寻找后面比value小的数
		{
			right--;
		}
		data[left] = data[right]; //放在刚刚取出第一个空的位置
		while (data[left] < value&&left < right)  //寻找前面比value大的数
		{
			left++;
		}
		data[right] = data[left];  //放在刚刚后面取走数的位置
	}
	data[left] = value; //当循环退出时，也就是left==right,则将刚刚第一次拿出来比较的数放到比较完之后空缺的位置
	return left;
}

void QuickSort(int *data, int left, int right, int k)
{
	if (left <= right)
	{
		int mid = Sqilt(data, left, right);
		if (mid == k)
		{
			printf("%d\n", data[mid]);
		}
		else if (mid > k)
		{
			QuickSort(data, left, mid - 1, k);
		}
		else
		{
			QuickSort(data, mid + 1, right, k);
		}
	}
}
void Copy(int *data, int m, int *temp)
{
	int i;
	for (i = 0; i < m; i++)
	{
		temp[i] = data[i];
	}
}
int main()
{
	int n,m;
	scanf("%d", &n);
	int i,*data;
	data = (int *)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &data[i]);
	}
	scanf("%d", &m);
	while (m)
	{
		int l;
		int r;
		int k;
		int *temp = (int *)malloc(sizeof(int)*m);
		scanf("%d%d%d", &l, &r, &k);
		Copy(data, n, temp);
		QuickSort(temp, l - 1, r - 1, r - k);
	}
	system("pause");
	return 0;
}