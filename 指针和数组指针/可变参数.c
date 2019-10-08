#include<stdio.h>
#include<Windows.h>
#include<stdarg.h>
int sum(int n, ...);
int sum(int n, ...)//参数个数不确定
{
	int sum = 0;
	int i = 0;
	va_list vap;//定义参数链表
	va_start(vap, n);//将定义的参数链表传入va_start宏中
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vap, int);//获取每个参数的值
	}
	va_end(vap);//结束这个参数链表
	return sum;
}
int main()
{
	int result;
	result = sum(3, 1, 2, 3);
	printf("result=%d\n", result);
	system("pause");
	return 0;
}