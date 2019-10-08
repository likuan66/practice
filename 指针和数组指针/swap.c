#include<stdio.h>
#include<Windows.h>

void swap(int *x, int *y);
void swap(int *x, int *y)
{
	int temp = 0;
	printf("In swap,»¥»»Ç°£ºx=%d,y=%d\n", *x, *y);
	temp = *x;
	*x = *y;
	*y = temp;
	printf("In swap,»¥»»ºó£ºx=%d,y=%d\n", *x, *y);
}
int main()
{
	int x = 3;
	int y = 5;
	printf("In main,»¥»»Ç°£ºx=%d,y=%d\n", x, y);
	swap(&x, &y);
	printf("In main,»¥»»ºó£ºx=%d,y=%d\n", x, y);
	system("pause");
	return 0;
}