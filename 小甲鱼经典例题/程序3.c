//��Ŀ��һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
#include<stdio.h>
#include<Windows.h>
#include<math.h>
int main()
{
	int i;
	for (i = 0; i < 10000; i++)
	{
		int m = sqrt(i + 100);
		int n = sqrt(i + 168);
		if (m*m == i + 100 && n*n == i + 168)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}