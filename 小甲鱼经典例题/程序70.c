//题目：写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int len(char *str)
{
	int length=0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return length;
}
int main()
{
	char *str[20];
	printf("请输入要求的字符串：\n");
	scanf("%s", str);
	int length ;
	
	printf("该字符串的长度是%d\n", len(str));
	system("pause");
	return 0;
}