#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

void Insertion_sort(int a[], int m)
{
	int i,j;
	int temp;
	for (i = 1; i < m; i++)//ִ��m-1�˵Ĳ���
	{
		if (a[i]<a[i - 1])//���ǰ��Ԫ�ر�ǰ�ߵĴ�
		{
			temp = a[i];  //����� ��Ԫ�طŵ�һ���м������
			for (j = i - 1; a[j]>temp; j--)//ȡ��Ԫ�غ�ʣ��Ԫ������������
			{
				a[j + 1] = a[j];
			}
			a[j + 1] = temp;//�ٽ����Ԫ�ز���ָ����λ��
		}
	}
}

int main()
{
	int a[20];
	printf("������10�����������\n");
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