/*对于长度为5位的一个01串，每一位都可能是0或1，一共有32种可能。它们的前几个是：
00000
00001
00010
00011
00100
请按从小到大的顺序输出这32种01串。*/
#include<stdio.h>
#include<Windows.h>
int main()
{
	int a,b,c,d,e;
	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 2; b++)
		{
			for (c = 0; c < 2; c++)
			{
				for (d = 0; d < 2; d++)
				{
					for (e = 0; e < 2; e++)
					{
						printf("%d%d%d%d%d\n", a, b, c, d, e);
					}
				}
			}
		}
	}


	system("pause");
	return 0;
}