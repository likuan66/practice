/*ʮ�����������ڳ������ʱ����Ҫʹ�õ���һ�������ı�ʾ��ʽ������0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F��16������
���ֱ��ʾʮ��������0��15��ʮ�����Ƶļ�����������16��1������ʮ������16��ʮ����������10��
��ʮ���Ƶ�17��ʮ����������11���Դ����ƣ�ʮ���Ƶ�30��ʮ����������1E����������һ���Ǹ�������������ʾ��ʮ�����Ƶ���ʽ��
*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

char data[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

int change(char arr[], long long m)
{
	int i = 0;
	while (m >0)
	{
		arr[i++] = data[m % 16];
		m /= 16;
	}
	return i;
}
int main()
{
	long long a;
	scanf("%lld", &a);
	char arr[200];
	int n;
	n = change(arr, a);
	int i;
	for (i = n - 1; i >= 0; i--)  //������
	{
		printf("%c", arr[i]);
	}
	system("pause");
	return 0;
}