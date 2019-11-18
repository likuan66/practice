/*问题描述
　　最近FJ为他的奶牛们开设了数学分析课，FJ知道若要学好这门课，必须有一个好的三
角函数基本功。所以他准备和奶牛们做一个“Sine之舞”的游戏，寓教于乐，提高奶牛们
的计算能力。*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void printA(int n, int k)
{
	if (n == k)
	{
		printf("sin(%d)", n);
	}
	else
	{
		printf("sin(%d", n);
		printf(n % 2 == 0 ? "+" : "-");
		printA(n + 1, k);
		printf(")");
	}
}
void prints(int n, int k)
{
	if (n == 1)
	{
		printA(1, n);
		printf("+%d", k - n);
	}
	else
	{
		printf("(");
		prints(n - 1, k);
		printf(")");
		printA(1, n);
		printf("+%d", k - n);
	}
}
int main()
{
	int N;
	scanf("%d", &N);
	prints(N, N + 1);
	printf("\n");
	system("pause");
	return 0;
}