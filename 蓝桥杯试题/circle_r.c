//����Բ�İ뾶r����Բ������� 
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define PI 3.14159265358979
int main()
{
	int r;
	printf("������һ��������ʾԲ�İ뾶��\n");
	scanf("%d", &r);
	double s;
	s = PI*r*r;
	printf("%.7f\n", s);

	system("pause");
	return 0;
}