//��Ŀ�����9*9�ھ���
#include<stdio.h>
#include<Windows.h>
int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%2d=%2d", j, i, j*i);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}