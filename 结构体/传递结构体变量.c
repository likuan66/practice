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
	printf("������������\n");
	scanf("%s", book.title);
	printf("���������ߣ�\n");
	scanf("%s", book.author);
	printf("��������ļ۸�\n");
	scanf("%f", &book.price);
	printf("������������ڣ�\n");
	scanf("%d-%d-%d", &book.date.year,&book.date.mounth,&book.date.day);
	printf("����������磺\n");
	scanf("%s", book.publisher);
	return book;
}
void printBook(struct Book book)
{
	printf("������%s\n", book.title);
	printf("���ߣ�%s\n", book.author);
	printf("��ļ۸�%f\n", book.price);
	printf("�������ڣ�%d-%d-%d\n", book.date.year,book.date.mounth,book.date.day);
	printf("�����磺%s\n", book.publisher);

}

int main()
{
	struct Book b={0};
	printf("�������Ȿ�����Ϣ��\n");
	b = getInput(b);

	printf("��ӡ�Ȿ�����Ϣ��\n");
	printBook(b);

	return 0;
}