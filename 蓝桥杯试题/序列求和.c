//��1+2+3+...+n��ֵ��
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	printf("������һλ������\n");
	scanf("%d", &n);
	int i = 0;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}