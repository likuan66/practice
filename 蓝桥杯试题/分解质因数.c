/*������ϰ �ֽ�������
��������
�����������[a,b]�������������������ֽ⡣
�����ʽ    ������������a��b��
�����ʽ    ÿ�����һ�����ķֽ⣬����k=a1*a2*a3...(a1<=a2<=a3...��kҲ�Ǵ�С�����)(����ɿ�����)
��������    3 10
�������	3=3	4=2*2	5=5	6=2*3	7=7  8=2*2*2  9=3*3 10=2*5
��ʾ		��ɸ������������Ȼ���ٷֽ⡣  ���ݹ�ģ��Լ��   2<=a<=b<=10000*/
#include<stdio.h>
#include<math.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	long int b, i, k, m, n, w = 0;
	scanf("%ld%ld", &m, &n);
	for (i = m; i <= n; i++)
	{
		printf("%ld=", i);
		b = i; k = 2;
		while (k <= sqrt(i))
		{
			if (b%k == 0)
			{
				b = b / k;
				if (b>1)
				{
					printf("%ld*", k); 
					continue;
				}
				if (b == 1)
				{
					printf("%ld\n", k);
				}
			}
			k++;
		}
		if (b>1 && b<i) printf("%ld\n", b);
		if (b == i)
		{
			printf("%d\n", i); w++;
		}
	}
	system("pause");
	return 0;
}
