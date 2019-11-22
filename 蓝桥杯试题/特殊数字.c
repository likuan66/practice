//　153是一个非常特殊的数，它等于它的每位数字的立方和，即153=1*1*1+5*5*5+3*3*3。编程求所有满足这种条件的三位十进制数。
#include<stdio.h>
#include<windows.h>
int main()
{
	int i = 0;
	for (i = 100; i < 1000; i++)
	{
		if ((i / 100)* (i / 100) * (i / 100) + (i % 100 / 10) * (i % 100 / 10) * (i % 100 / 10) + (i % 10) * (i % 10) * (i % 10) == i)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}