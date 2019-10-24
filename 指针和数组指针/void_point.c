
#include<stdio.h>
#include<windows.h>

int main()
{
	int num = 123;
	int *pi = &num;
	char *ps = "likuan";
	void *pv;

	pv = pi;
	printf("pi:%p,pv:%p\n", pi, pv);
	//printf("*pv:%d\n", *pv); 不要对void类型的指针进行解引用 ，应为void类型是不确定类型
	printf("*pv:%d\n",*(int *)pv);//强制类型转换，将void型指针转换为int型
	pv = ps;
	printf("ps:%p,pv:%p\n", ps, pv);
	printf("pv:%s\n", pv);//字符串比较特殊
	printf("pv:%s\n", (char *)pv);

	/*将任何类型的指针转换为void类型的指针是ok的   
	而将void类型的指针转换为其他类型的指针是要加强制类型转换*/

	system("pause");
	return 0;
}