/*从键盘输入一个不超过8位的正的十六进制数字符串，将它转换为正的十进制数后输出。
注：十六进制数中的10~15分别用大写的英文字母A、B、C、D、E、F表示。
样例输入
FFFF
样例输出
65535*/
#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
#include<string.h>
#include<math.h>

int main()
{
	char s[50];
	printf("请输入一个不超过8位的正的十六进制数字符串:\n");
	scanf("%s",s);
	int len = strlen(s);
	long sum = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] >= 'A'&&s[i] <= 'B')
		{
			s[i] = (int)(s[i] - 'A') + 10 + '0';	
		}
		sum += ((s[i] - '0')*(pow(16, len - 1 - i)));
	}
	printf("%ld\n",sum);


	system("pause");
	return 0;
}