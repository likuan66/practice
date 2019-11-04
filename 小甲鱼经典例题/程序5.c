//题目：输入三个整数x,y,z，请把这三个数由小到大输出。
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void sort(int *x, int *y, int *z)
{
	int temp;
	if (*x > *y)
	{
		temp = *x;
		*x = *y;
		*y = temp;
	}
	if (*x > *z)
	{
		temp = *x;
		*x = *z;
		*z = temp;
	}
	if (*y > *z)
	{
		temp = *y;
		*y = *z;
		*z = temp;
	}
}
int main()
{
	int x, y, z;
	printf("请输入3为整数：\n");
	scanf("%d%d%d", &x, &y, &z);
	printf("排序前：%d %d %d", x, y, z);
	sort(&x, &y, &z);
	printf("\n");
	printf("排序后：%d %d %d", x, y, z);

	system("pause");
	return 0;
}