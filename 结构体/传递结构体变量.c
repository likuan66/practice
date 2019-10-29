#include<stdio.h>
#pragma warning(disable:4996)

struct Book getInput(struct Book book);
void printBook(struct Book book);
struct Date
{
	int year;
	int mounth;
	int day;
};

struct Book
{
	char title[120];
	char author[40];
	float price;
	struct Date date;
	char publisher[40];
};
struct Book getInput(struct Book book)
{
	printf("请输入书名：\n");
	scanf("%s", book.title);
	printf("请输入作者：\n");
	scanf("%s", book.author);
	printf("请输入书的价格：\n");
	scanf("%f", &book.price);
	printf("请输入出版日期：\n");
	scanf("%d-%d-%d", &book.date.year,&book.date.mounth,&book.date.day);
	printf("请输入出版社：\n");
	scanf("%s", book.publisher);
	return book;
}
void printBook(struct Book book)
{
	printf("书名：%s\n", book.title);
	printf("作者：%s\n", book.author);
	printf("书的价格：%f\n", book.price);
	printf("出版日期：%d-%d-%d\n", book.date.year,book.date.mounth,book.date.day);
	printf("出版社：%s\n", book.publisher);

}

int main()
{
	struct Book b={0};
	printf("请输入这本书的信息：\n");
	b = getInput(b);

	printf("打印这本书的信息：\n");
	printBook(b);

	return 0;
}