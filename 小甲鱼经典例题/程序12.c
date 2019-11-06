//题目：判断101-200之间有多少个素数，并输出所有素数。

#include<stdio.h>
#include<Windows.h>
#include<math.h>
int main()
{
	int i,j;
	int count = 0;
	for (i = 101; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
			else
			{
				printf("%d ", i);
				count++;
				break;
			}
		}
		if (count % 10 == 0)
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}