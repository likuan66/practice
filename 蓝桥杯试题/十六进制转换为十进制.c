/*从键盘输入一个不超过8位的正的十六进制数字符串，将它转换为正的十进制数后输出。
　　注：十六进制数中的10~15分别用大写的英文字母A、B、C、D、E、F表示。*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	char s[9];
	scanf("%s", s);
	int i = 0;
	unsigned int n = 1;
	unsigned int b = 0;
	for (i = strlen(s) - 1; i >= 0; i--)
	{
		if (s[i] <= '9')
		{
			b += (s[i] - '0')*n;
		}
		else
		{
			b += (s[i] - 'A' + 10)*n;
		}
		n = n * 16;
	}
	printf("%u\n", b);
	system("pause");
	return 0;
}