//��Ŀ����n��������ʹ��ǰ�����˳�������m��λ�ã����m���������ǰ���m����
#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n = sizeof(a) / sizeof(a[0]);
	int m = 3;
	int b[20];
	int i = 0;
	for (i = 0; i < n-3; i++)
	{
		b[i+m] = a[i];
	}
	for (i = 0; i < 3; i++)
	{
		b[i] = a[n - (m-i)];
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", b[i]);
	}

	system("pause");
	return 0;
}