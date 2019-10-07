#include<stdio.h>
#include<Windows.h>
int main()
{
	int array[3][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 5, 2, 4, 9 }};
	int(*p)[4] = array;
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%2d ", *(*(p + i) + j));
		}
		printf("\n");
	}

	system("pause");
	return 0;
}