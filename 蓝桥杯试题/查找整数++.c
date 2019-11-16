#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int n;
	scanf("%d", &n);
	int i, arr[100];
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
			printf("%d", i + 1);
			return 0;  //找到之后直接结束程序
		}
	}
	printf("-1\n");  //-1表示没找到
	system("pause");
	return 0;
}