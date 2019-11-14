/*Fibonacci数列的递推公式为：Fn = Fn - 1 + Fn - 2，其中F1 = F2 = 1。
当n比较大时，Fn也非常大，现在我们想知道，Fn除以10007的余数是多少。*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int fib(int m)
{
	if (m == 1 || m == 2)
	{
		return 1;
	}
	else
	{
		return fib(m - 1) + fib(m - 2);
	}
}
int main()
{
	int n;
	printf("请输入一位整数：\n");
	scanf("%d", &n);
	printf("%d", fib(n)%10007);
	system("pause");
	return 0;
}