//求1+2+3+...+n的值。
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	printf("请输入一位整数：\n");
	scanf("%d", &n);
	int i = 0;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}