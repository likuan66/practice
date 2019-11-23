/*��������
����һ�����У�ÿ��ѯ�������е�l��������r�����е�K��������ĸ���*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int Sqilt(int *data, int left, int right)  //��������ķ���
{
	int value = data[left];  //���ȡ��һ����������ȡ����һ��������value������
	while (left < right)
	{
		while (data[right] >= value&&left < right)  //Ѱ�Һ����valueС����
		{
			right--;
		}
		data[left] = data[right]; //���ڸո�ȡ����һ���յ�λ��
		while (data[left] < value&&left < right)  //Ѱ��ǰ���value�����
		{
			left++;
		}
		data[right] = data[left];  //���ڸոպ���ȡ������λ��
	}
	data[left] = value; //��ѭ���˳�ʱ��Ҳ����left==right,�򽫸ոյ�һ���ó����Ƚϵ����ŵ��Ƚ���֮���ȱ��λ��
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