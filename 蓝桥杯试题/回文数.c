//　1221是一个非常特殊的数，它从左边读和从右边读是一样的，编程求所有这样的四位十进制数。
#include<stdio.h>
#include<Windows.h>


int main()
{
	int i = 0;
	for (i = 1000; i < 10000; i++)
	{

		if (i / 1000 == i % 10 && i / 100 % 10 == i % 100 / 10 && i / 1000 < i / 100 % 10)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}