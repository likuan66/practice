//题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
#include<stdio.h>
#include<Windows.h>

int main()
{
	int i, j, k;
	int count=0;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			for (k = 1; k <= 4; k++)
			{
				if (i != j&&j != k&&i!=k)
				{
					printf("%d ", i * 100 + j * 10 + k);
					count++;
				}
			}
		}
	}
	printf("\n组成的不重复的三位数共有：%d\n", count);
	system("pause");
	return 0;
}