#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

void hanoi(int n, char x, char y, char z);
void hanoi(int n, char x, char y, char z)
{
	if (n == 1)
	{
		printf("%c-->%c\n", x, z);
	}
	else
	{
		hanoi(n - 1, x, z, y);
		printf("%c-->%c\n", x, z);
		hanoi(n - 1, y, x, z);
	}
}

int main(void)
{
	int n;
	printf("ÇëÊäÈëººÅµËşµÄ²ãÊı£º");
	scanf("%d", &n);

	hanoi(n,'x','y','z');
	system("pause");
	return 0;
}