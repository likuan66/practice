/*Fibonacci���еĵ��ƹ�ʽΪ��Fn = Fn - 1 + Fn - 2������F1 = F2 = 1��
��n�Ƚϴ�ʱ��FnҲ�ǳ�������������֪����Fn����10007�������Ƕ��١�*/
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
	printf("������һλ������\n");
	scanf("%d", &n);
	printf("%d", fib(n)%10007);
	system("pause");
	return 0;
}