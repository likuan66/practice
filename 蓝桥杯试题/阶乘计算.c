/*问题描述
　　输入一个正整数n，输出n!的值。
  　　其中n!=1*2*3*…*n。
输入格式
　　输入包含一个正整数n，n<=1000。
输出格式
　　输出n!的准确值。
样例输入
	10
样例输出
	3628800*/
#include <stdio.h>
#include <string.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define N 10000
int main()
{
	int a[N] = { 1 };
	int k = 0, l = 1, n;
	int i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j<l; j++)
		{
			a[j] = a[j] * i + k;
			k = a[j] / 10000;
			a[j] = a[j] % 10000;
		}
		if (k)
		{
			a[j] = k;
			l++;
			k = 0;
		}
	}
	printf("%d", a[l - 1]);
	for (i = l - 2; i >= 0; i--)
		printf("%04d", a[i]);
	printf("\n");
	system("pause");
	return 0;
}
