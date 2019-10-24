//指针数组和指向指针的指针

#include<stdio.h>
#include<Windows.h>

int main()
{
	char *cBooks[] = { "C语言", "Java", "c++", "paython", "c#" ,"你最帅"};

	char **c;
	char **dBooks[4];
	
	c = &cBooks[5];
	dBooks[0] = &cBooks[0];
	dBooks[1] = &cBooks[1];
	dBooks[2] = &cBooks[2];
	dBooks[3] = &cBooks[3];

	printf("cBooks中书有：%s\n", *c);
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%s\n", *dBooks[i]);
	}

	system("pause");
	return 0;
}