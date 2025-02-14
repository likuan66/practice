/*基础练习 分解质因数
问题描述
　　求出区间[a,b]中所有整数的质因数分解。
输入格式    输入两个整数a，b。
输出格式    每行输出一个数的分解，形如k=a1*a2*a3...(a1<=a2<=a3...，k也是从小到大的)(具体可看样例)
样例输入    3 10
样例输出	3=3	4=2*2	5=5	6=2*3	7=7  8=2*2*2  9=3*3 10=2*5
提示		先筛出所有素数，然后再分解。  数据规模和约定   2<=a<=b<=10000*/
#include<stdio.h>
#include<math.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	long int b, i, k, m, n, w = 0;
	scanf("%ld%ld", &m, &n);
	for (i = m; i <= n; i++)
	{
		printf("%ld=", i);
		b = i; k = 2;
		while (k <= sqrt(i))
		{
			if (b%k == 0)
			{
				b = b / k;
				if (b>1)
				{
					printf("%ld*", k); 
					continue;
				}
				if (b == 1)
				{
					printf("%ld\n", k);
				}
			}
			k++;
		}
		if (b>1 && b<i) printf("%ld\n", b);
		if (b == i)
		{
			printf("%d\n", i); w++;
		}
	}
	system("pause");
	return 0;
}
