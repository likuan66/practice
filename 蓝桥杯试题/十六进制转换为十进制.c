/*�Ӽ�������һ��������8λ������ʮ���������ַ���������ת��Ϊ����ʮ�������������
����ע��ʮ���������е�10~15�ֱ��ô�д��Ӣ����ĸA��B��C��D��E��F��ʾ��*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	char s[9];
	scanf("%s", s);
	int i = 0;
	unsigned int n = 1;
	unsigned int b = 0;
	for (i = strlen(s) - 1; i >= 0; i--)
	{
		if (s[i] <= '9')
		{
			b += (s[i] - '0')*n;
		}
		else
		{
			b += (s[i] - 'A' + 10)*n;
		}
		n = n * 16;
	}
	printf("%u\n", b);
	system("pause");
	return 0;
}