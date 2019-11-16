/*
基础练习 回文数

问题描述
　　1221是一个非常特殊的数，它从左边读和从右边读是一样的，编程求所有这样的四位十进制数。
 输出格式
 按从小到大的顺序输出满足条件的四位十进制数。*/
#include<stdio.h>
#include<Windows.h>

main()
{
	int a, b, i;
	for (a = 1; a <= 9; a++)
	for (b = 0; b <= 9; b++)
	{
		printf("%d%d%d%d\n", a, b, b, a);
	}
	system("pause");
	return 0;
}
