/*给定一个年份，判断这一年是不是闰年。
当以下情况之一满足时，这一年是闰年：
1. 年份是4的倍数而不是100的倍数；
2. 年份是400的倍数。
其他的年份都不是闰年。*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int y;
	scanf("%d", &y);
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	system("pause");
	return 0;
}