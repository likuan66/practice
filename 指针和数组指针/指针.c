#include<stdio.h>
#include<Windows.h>
int main()
{
	int array[4][5] = { 0 };
	int i, j, k = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			array[i][j] = k++;
		}
	}
	printf("*(array+1):%p\n", *(array + 1));
	printf("array[1]:%p\n", array[1]);
	printf("&array[1][0]:%p\n", &array[1][0]);
	printf("**(array+1):%d\n", **(array + 1));
	printf("*(*(array+1)+3):%d\n", *(*(array + 1) + 3));
	printf("array[1][3]:%d\n", array[1][3]);
	system("pause");
	return 0;
}