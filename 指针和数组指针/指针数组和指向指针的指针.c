//ָ�������ָ��ָ���ָ��

#include<stdio.h>
#include<Windows.h>

int main()
{
	char *cBooks[] = { "C����", "Java", "c++", "paython", "c#" ,"����˧"};

	char **c;
	char **dBooks[4];
	
	c = &cBooks[5];
	dBooks[0] = &cBooks[0];
	dBooks[1] = &cBooks[1];
	dBooks[2] = &cBooks[2];
	dBooks[3] = &cBooks[3];

	printf("cBooks�����У�%s\n", *c);
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%s\n", *dBooks[i]);
	}

	system("pause");
	return 0;
}