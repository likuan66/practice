//题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
#include<stdio.h>
#include<Windows.h>
#include<math.h>
int main()
{
	int i;
	for (i = 0; i < 10000; i++)
	{
		int m = sqrt(i + 100);
		int n = sqrt(i + 168);
		if (m*m == i + 100 && n*n == i + 168)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}