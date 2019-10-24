//数组指针和二维数组
#include<stdio.h>
#include<Windows.h>

int main()
{
	int array[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	int (*p)[4] = array;//应用数组指针可以解决”跨度“的问题
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%2d ", *(*(p + i) + j));
		}
		printf("\n");
	}
	/*printf("p:%p array:%p\n", p, array);  p->p+1 p加了4个字节，而array->array+1 array加了16个字节 刚好是数组的一行
	printf("p+1:%p array+1:%p", p + 1, array + 1);*/

	system("pause");
	return 0;
}