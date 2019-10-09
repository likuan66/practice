#include<stdio.h>
#include<Windows.h>

void quik_sort(int array[], int left, int right)
{
	int i = left, j = right;
	int temp;
	int pivot;//���ĵ�
	pivot = array[(left + right) / 2];//�����ĵĵ����м�Ԫ��
	while (i <= j)
	{
		//�������ҵ����ڵ������ĵ����
		while (array[i] < pivot)
		{
			i++;
		}
		//���ҵ����ҵ�С�ڵ������ĵ����
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

	length = sizeof(array) / sizeof(array[0]);//����������Ԫ�صĸ���
	quik_sort(array, 0, length - 1);

	printf("�����Ľ���ǣ�");
	for (i = 0; i < length; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}