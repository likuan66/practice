//��Ŀ��������������x,y,z���������������С���������
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
	printf("������3Ϊ������\n");
	scanf("%d%d%d", &x, &y, &z);
	printf("����ǰ��%d %d %d", x, y, z);
	sort(&x, &y, &z);
	printf("\n");
	printf("�����%d %d %d", x, y, z);

	system("pause");
	return 0;
}