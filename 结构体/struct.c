#include<stdio.h>
#include<Windows.h>

struct Book
{
	char title[120];
	char auther[40];
	float price;
	unsigned int date;
	char publisher[40];
} book;

int main()
{
	printf("请输入书名：");
	scanf_s("%s", book.title);
	printf("请输入作者：");
	scanf_s("%s", book.auther);
	printf("请输入价格：");
	scanf_s("%f", &book.price);
	printf("请输入日期：");
	scanf_s("%d", &book.date);
	printf("请输入出版社：");
	scanf_s("%s", book.publisher);

	printf("\n==========数据录入完毕===========");

	printf("书名：%s\n", book.title);
	printf("作者：%s\n", book.auther);
	printf("价格：%f\n", book.price);
	printf("日期：%d\n", book.date);
	printf("出版社：%s\n", book.publisher);
	system("pause");
	return 0;
}