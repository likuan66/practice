//　给定n个十六进制正整数，输出它们对应的八进制数。
#include<stdio.h>
#include<Windows.h>
#include<string.h>
#pragma warning(disable:4996)

int exchange_ten(char m[]);
void exchange_eight(int n);
void printNum(int ret[], int n);
int exchange_ten(char m[])
{
	int i = 0;
	int b = 0;
	int n = 1;
	for (i = strlen(m)-1; i >= 0; i--)
	{
		if (m[i] <= '9')
		{
			b += (m[i] - '0')*n;
		}
		else
		{
			b += (m[i] - 'A' + 10)*n;
		}
		n = n * 16;
	}
	return b;
}
void exchange_eight(int n)
{
	int b[200] = { 0 };
	int i = 0;
	while (n > 0)
	{
		b[i++] = n % 8;
		n /= 8;
	}
	printNum(b, i);
}
void printNum(int ret[], int n)
{
	int i = 0;
	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", ret[i]);
	}
	printf("\n");
}
int main()
{
	char a[100];
	int n,count=0;
	scanf("%d", &n);
	while (n--)
	{
		printf("请输入第%d个16进制数:\n", ++count);
		scanf("%s", a);
		int m;
		m = exchange_ten(a);
		exchange_eight(m);
		
	}
	system("pause");
	return 0;
}