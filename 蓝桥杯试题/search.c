//����һ������n�����������У�������a�������еĵ�һ�γ����ǵڼ���
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int n;
	scanf("%d", &n);
	int i,arr[100];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int a;
	scanf("%d", &a);
	for (i = 0; i <n; i++)
	{
		if (a == arr[i])
		{
			printf("%d", i+1);
			break;
		}
		
	}
	system("pause");
	return 0;
}