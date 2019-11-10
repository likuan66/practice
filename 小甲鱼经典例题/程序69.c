//题目：有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位。
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int n;
	printf("请输入人数：\n");
	scanf("%d", &n);
	int num[50];
	int i, k, m, *p;
	p = num;
	for (i = 0; i < n; i++)
	{
		*(p + i) = i + 1;    //给每个人进行排序
	}
	i = 0;//i表示每次循环的计数器
	k = 0;//k为1，2，3报数变量
	m = 0;//m表示淘汰的人数
	while (m < n - 1)
	{
		if (*(p + i) != 0)
		{
			k++;
		}
		if (k == 3)//将退出人的编号置为0
		{
			*(p + i) = 0;
			k = 0;
			m++;
		}
		i++;
		if (i == n)
		{
			i = 0;//报数到尾后i回复到0
		}
	}
	while (*p == 0)
	{
		p++;
	}
	printf("能活到最后的是：%d号\n", *p);
	
	system("pause");
	return 0;
}