//题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	char str;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	while ((str=getchar())!= '\n')
	{
		if (str >= 'a'&&str <= 'z' || str >= 'A'&&str <= 'Z')
		{
			letters++;
		}
		else if (str >= '0'&&str <= '9')
		{
			digits++;
		}
		else if (str == ' ')
		{
			spaces++;
		}
		else
		{
			others++;
		}
	}
	printf("字符=%d,数字=%d,空格=%d,其他=%d\n", letters, digits, spaces, others);
	system("pause");
	return 0;
}