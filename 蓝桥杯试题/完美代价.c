/*������ϰ �����Ĵ���
��������	���Ĵ�����һ��������ַ��������������Ҷ��ʹ����������һ���ġ�С������Ϊ���Ĵ����������ġ�
			���ڸ���һ����������һ���ǻ��ĵģ�����������ٵĽ�������ʹ�øô����һ�������Ļ��Ĵ��������Ķ����ǣ������������ڵ��ַ�
����mamad	��һ�ν��� ad : mamda
		�����ڶ��ν��� md : madma
		  �������ν��� ma : madam (���ģ�������)
�����ʽ	��һ����һ������N����ʾ���������ַ����ĳ���(N <= 8000)
			�ڶ�����һ���ַ���������ΪN.ֻ����Сд��ĸ
�����ʽ	������ܣ�������ٵĽ����������������Impossible
��������	5
			mamad
�������	3*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
char x = '0';
int changes(char str[], char x, int n)
{
	int i, change = 0, j, k;
	for (i = 0; i < n / 2; i++)
	{
		if (str[i] == x)
		{
			for (j = i; j < n - i - 1; j++)
			{
				if (str[n - i - i] == str[j])
				{
					break;
				}
			}
				change += j - i;
				for (k = j; k>i; k--)
				{
					str[k] = str[k - 1];
				}
				str[i] = str[n - i - 1];			
		}
		else
		{
			for (j = n - i - 1; j >= i; j--)
			{
				if (str[i] == str[j])
				{
					break;
				}
			}
			change += n - i - 1 - j;
			for (k = j; k < n - i - 1; k++)
			{
				str[k] = str[k + 1];
			}
			str[n - i - 1] = str[i];	
		}
	}
	return change;
}

int main()
{
	int N,k=0;
	scanf("%d", &N);
	char str[8000] = { 0 };
	int i, j, b[26] = { 0 };
	for (i = 0; i < N; i++)
	{
		scanf("%c", &str[i]);
	}
	for (i = 0; i < N; i++)
	{
		j = str[i] - 'a';
		b[j]++;
	}
	for (j = 0; j < 26; j++)
	{
		if (b[j] % 2 != 0)
		{
			k++;
			x = j + 'a';
		}
	}
	if (k >= 2)
	{
		printf("Impossible\n");
	}
	else
	{
		printf("%d\n", changes(str, x, N));
	}

	system("pause");
	return 0;
}
