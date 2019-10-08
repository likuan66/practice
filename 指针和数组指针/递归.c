#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
long fact(int);
long fact(int num)
{
	long result;
	if (num > 0)
	{
		result = num*fact(num - 1);
	}
	else
	{
		result = 1;
	}
	return result;
}
int main()
{
	int num;
	printf("请输入一个整数：");
	scanf("%d", &num);

	printf("%d的阶乘是:%d\n", num, fact(num));
	system("pause");
	return 0;
}