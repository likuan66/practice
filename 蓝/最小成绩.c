
#include <stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void sortA(int a[], int n)
{
	int i, j,t;
	for (i = 0; i<n - 1; i++)
	{
		for (j = i + 1; j<n-i; j++)
		{
				if (a[i]<a[j])
				{
					t = a[i]; 
					a[i] = a[j];
					a[j] = t;
				}
		}
	}
}
void sortB(int b[], int n)
{
	int i, j, t;
	for (i = 0; i<n - 1; i++)
	{
		for (j = i + 1; j<n-i; j++)
		{
			if (b[i]>b[j])
			{
				t = b[i];
				b[i] = b[j];
				b[j] = t;
			}
		}
	}
}
int main()
{
	int t, n, m, a[9], b[9], i, j, s = 0;
	printf("请输入要测试几组数据\n");
	scanf("%d", &t);//想要测试几组数据
	while (t--)
	{
		s = 0;
		printf("请输入数组中元素的个数：\n");
		scanf("%d", &n);
		printf("请输入第一组元素的个数:\n");
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		printf("请输入第二组元素的个数:\n");
		for (i = 0; i < n; i++)
		{
			scanf("%d", &b[i]);
		}
		sortA(a, n);
		sortB(b, n);
		for (i = 0; i<n; i++)
		{
			s += a[i] * b[i];
		}
		printf("%d\n", s);
	}
	system("pause");
	return 0;
}
