/*123321��һ���ǳ����������������߶��ʹ��ұ߶���һ���ġ�
����һ��������n�� �����������������λ����λʮ�������������λ����֮�͵���n*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int m;
	scanf("%d", &m);
	while (m)
	{
		int p = 10001;
		int a, b, c, d, e,f;
		while (p < 100000)
		{
			a = p / 10000;
			b = p % 10000 / 1000;
			c = p % 1000 / 100;
			d = p % 100 / 10;
			e = p % 10;
			if (a + b + c + d + e == m&&a == e&&b == d)
			{
				printf("%d\n", p);
			}
			p++;
		}
		int q = 100001;
		while (q < 1000000)
		{
			a = p / 100000;
			b = p % 100000 / 10000;
			c = p % 10000 / 1000;
			d = p % 1000 / 100;
			e = p % 100 / 10;
			f = p % 10;
			if (a + b + c + d + e + f == m&&a == f&&b == e&&c == d)
			{
				printf("%d\n", p);
			}
			p++;
		}
	}

	system("pause");
	return 0;
}