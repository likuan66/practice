//����n�������ҳ���n���������ֵ����Сֵ���͡�
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int n;
	scanf("%d", &n);
	int arr[100];
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	int min = arr[3];
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("%d\n%d\n%d\n", max, min, sum);
	system("pause");
	return 0;
}