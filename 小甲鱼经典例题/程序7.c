//题目：输出特殊图案，
#include<stdio.h>
#include<Windows.h>

int main()
{
	system("color 1F");  // 设定显示框为蓝底白字
	system("mode con cols=80 lines=30");  //固定显示框尺寸
	char a = 176, b = 219;
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", a, a, b, a, a);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	system("pause");
	return 0;
}