//��Ŀ��дһ����������һ���ַ����ĳ��ȣ���main�����������ַ�����������䳤�ȡ�
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int len(char *str)
{
	int length=0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return length;
}
int main()
{
	char *str[20];
	printf("������Ҫ����ַ�����\n");
	scanf("%s", str);
	int length ;
	
	printf("���ַ����ĳ�����%d\n", len(str));
	system("pause");
	return 0;
}