//��1221��һ���ǳ����������������߶��ʹ��ұ߶���һ���ģ������������������λʮ��������
#include<stdio.h>
#include<Windows.h>


int main()
{
	int i = 0;
	for (i = 1000; i < 10000; i++)
	{

		if (i / 1000 == i % 10 && i / 100 % 10 == i % 100 / 10 && i / 1000 < i / 100 % 10)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}