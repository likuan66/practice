//����ָ��Ͷ�ά����
#include<stdio.h>
#include<Windows.h>

int main()
{
	int array[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	int (*p)[4] = array;//Ӧ������ָ����Խ������ȡ�������
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%2d ", *(*(p + i) + j));
		}
		printf("\n");
	}
	/*printf("p:%p array:%p\n", p, array);  p->p+1 p����4���ֽڣ���array->array+1 array����16���ֽ� �պ��������һ��
	printf("p+1:%p array+1:%p", p + 1, array + 1);*/

	system("pause");
	return 0;
}