#include<stdio.h>
#include<Windows.h>
#include<stdarg.h>
int sum(int n, ...);
int sum(int n, ...)//����������ȷ��
{
	int sum = 0;
	int i = 0;
	va_list vap;//�����������
	va_start(vap, n);//������Ĳ���������va_start����
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vap, int);//��ȡÿ��������ֵ
	}
	va_end(vap);//���������������
	return sum;
}
int main()
{
	int result;
	result = sum(3, 1, 2, 3);
	printf("result=%d\n", result);
	system("pause");
	return 0;
}