//��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	char str;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	while ((str=getchar())!= '\n')
	{
		if (str >= 'a'&&str <= 'z' || str >= 'A'&&str <= 'Z')
		{
			letters++;
		}
		else if (str >= '0'&&str <= '9')
		{
			digits++;
		}
		else if (str == ' ')
		{
			spaces++;
		}
		else
		{
			others++;
		}
	}
	printf("�ַ�=%d,����=%d,�ո�=%d,����=%d\n", letters, digits, spaces, others);
	system("pause");
	return 0;
}