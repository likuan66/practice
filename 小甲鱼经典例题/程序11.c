//题目：古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，
//小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
//兔子的规律为数列1,1,2,3,5,8,13,21....
#include<stdio.h>
#include<Windows.h>

int main()
{
	int mounth, x, i = 1, j = 0;
	for (mounth = 1; mounth <= 12; mounth++)
	{
		x = i;
		printf("第 %d 个月有 %d 只兔子：\n", mounth, 2 * i);
		i = i + j;
		j = x;
	}
	system("pause");
	return 0;
}