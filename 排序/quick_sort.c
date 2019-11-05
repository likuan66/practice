#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

void quick_sort(int a[], int left, int right)
{
	if (left >= right)//�����ߵ�ֵ�����ұߵ�ֵ˵���Ѿ������һ���ִ��
	{
		return;
	}
	int temp = a[left];//����һ��Ԫ����Ϊ�Ա�Ԫ�أ��ο�ֵ��
	int i = left;
	int j = right;
	while (i < j)
	{

		while (i<j && a[j]>temp)//�������ο�ֵС���ұ����Ƚϵ�Ԫ�أ���j--�������ұߵ���һ��Ԫ����ο�ֵ�Ƚ�
		{
			j--;
		}
		a[i] = a[j];  //�ҵ���һ���Ȳο�ֵС�����������������ǰ��  ��ԭ��ȡ�ο�ֵ��λ�ã�
		while (i <j && a[i] <= temp)//����ο�ֵ���ڵ����ұ����Ƚϵ�Ԫ�أ���i++��������һ��Ԫ����ο�ֵ�ıȽ�
		{
			i++;
		}
		a[j] = a[i];  //�ҵ���һ���Ȳο�ֵ���������������ŵ����棨�ոշ���ǰ���Ǹ�����λ�ã�
	}
	a[i] = temp;   //���ڵ���������һ���Ժ�Ͱ��м���temp�ع�
	quick_sort(a, left, i - 1);  //�����ͬ���ķ�ʽ�Էֳ�������ߵ�С�����ͬ�ϵ�����
	quick_sort(a, j + 1, right);  //��ͬ���ķ�ʽ�Էֳ������ұߵ�С�����ͬ�ϵ�����
	
}

int main()
{
	int arr[10];
	printf("������ Ҫ�����ʮ������\n");
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