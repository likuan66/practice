#include<stdio.h>
#include<Windows.h>

void swap(int *x, int *y);
void swap(int *x, int *y)
{
	int temp = 0;
	printf("In swap,����ǰ��x=%d,y=%d\n", *x, *y);
	temp = *x;
	*x = *y;
	*y = temp;
	printf("In swap,������x=%d,y=%d\n", *x, *y);
}
int main()
{
	int x = 3;
	int y = 5;
	printf("In main,����ǰ��x=%d,y=%d\n", x, y);
	swap(&x, &y);
	printf("In main,������x=%d,y=%d\n", x, y);
	system("pause");
	return 0;
}