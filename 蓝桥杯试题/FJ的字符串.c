/*��������
����FJ��ɳ����д������һЩ�ַ�����
����A1 = ��A��
����A2 = ��ABA��
����A3 = ��ABACABA��
����A4 = ��ABACABADABACABA��
������ ��
���������ҳ����еĹ��ɲ�д���е�����AN��
�����ʽ
��������һ������N �� 26��
�����ʽ
�����������Ӧ���ַ���AN����һ�����з�����������в��ú��ж���Ŀո���С�
�س�����
��������
3
�������
ABACABA*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void f(int a)
{
	if (a == 0)
	{
		printf("%c", 'A');
	}
	else
	{
		f(a - 1);
		printf("%c", a + 'A');
		f(a - 1);
	}
}
int main()
{
	int N;
	scanf("%d", &N);
	f(N - 1);

	system("pause");
	return 0;
}