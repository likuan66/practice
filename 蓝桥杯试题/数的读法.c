#include<stdio.h>
#include<Windows.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char a[100];
	int i, j, k, len;
	char b[20][10] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
	char c[20][10] = { "", "", "shi", "bai", "qian", "wan", "shi", "bai", "qian", "yi", "shi" };
	gets(a);  //获取字符串，如果输入有空格也可以获取到
	len = strlen(a);
	for (i = 0; i < len; i++)
	{
		j = a[i] - 48;
		if (j == 0)
		{
			if (i < len - 1)
			{
				if (a[i + 1] != 48)
				{
					printf("%s ", b[j]);
				}
			}
		}
		else if ((len - i == 2 || len - i == 6 || len - i == 10) && j == 1)
		{
			printf("%s ", c[len - i]);
		}
		else if (a[i - 1] == 48 && j == 1)
		{
			printf("%s ", c[len - i]);
		}
		else
		{
			printf("%s %s ", b[j], c[len - i]);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}