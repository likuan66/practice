//��Ŀ����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
#include<stdio.h>
#include<Windows.h>

int main()
{
	int i, j, k;
	int count=0;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			for (k = 1; k <= 4; k++)
			{
				if (i != j&&j != k&&i!=k)
				{
					printf("%d ", i * 100 + j * 10 + k);
					count++;
				}
			}
		}
	}
	printf("\n��ɵĲ��ظ�����λ�����У�%d\n", count);
	system("pause");
	return 0;
}