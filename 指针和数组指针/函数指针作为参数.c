#include<stdio.h>
#include<Windows.h>

int add(int, int);
int sub(int, int);
int calc(int(*fp)(int, int), int, int);

int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int calc(int(*fp)(int, int), int x, int y)
{
	return (*fp)(x, y);
}

int main()
{
	printf("5+6=%d\n", calc(add, 5, 6));
	printf("5-6=%d\n", calc(sub, 5, 6));
	system("pause");
	return 0;
}