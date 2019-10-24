
#include<stdio.h>
#include<Windows.h>

int main()
{
	int num = 250;
	int *p = &num;
	int **pp = &p;

	printf("num:%d\n", num);
	printf("*p:%d\n", *p);
	printf("**pp:%d\n", **pp);

	printf("&p:%p \n", &p);
	printf("pp:%p\n", pp);
	printf("&num:%p\n", &num);
	printf("p:%p\n", p);
	printf("*pp:%p\n", *pp);

	system("pause");
	return 0;
}