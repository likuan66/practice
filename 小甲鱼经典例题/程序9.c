//��Ŀ��Ҫ����������������̡�
#include<stdio.h>
#include<Windows.h>

int main()
{
	int i, j;
	for (i = 1; i <= 8; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				printf("%c ", 1);
			}
			else
			{
				printf("%c ", 0);
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}