#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int square(int);
int square(int num)
{
	return num*num;
}
int main()
{
	int num;
	int(*p)(int);
	printf("������һ��������");
	scanf("%d", &num);
	p = square;
	printf("%d*%d=%d", num, num, (*p)(num));

	system("pause");
	return 0;
}