/*�Ӽ�������һ��������8λ������ʮ���������ַ���������ת��Ϊ����ʮ�������������
ע��ʮ���������е�10~15�ֱ��ô�д��Ӣ����ĸA��B��C��D��E��F��ʾ��
��������
FFFF
�������
65535*/
#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
#include<string.h>
#include<math.h>

int main()
{
	char s[50];
	printf("������һ��������8λ������ʮ���������ַ���:\n");
	scanf("%s",s);
	int len = strlen(s);
	long sum = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] >= 'A'&&s[i] <= 'B')
		{
			s[i] = (int)(s[i] - 'A') + 10 + '0';	
		}
		sum += ((s[i] - '0')*(pow(16, len - 1 - i)));
	}
	printf("%ld\n",sum);


	system("pause");
	return 0;
}