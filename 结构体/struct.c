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
	printf("������������");
	scanf_s("%s", book.title);
	printf("���������ߣ�");
	scanf_s("%s", book.auther);
	printf("������۸�");
	scanf_s("%f", &book.price);
	printf("���������ڣ�");
	scanf_s("%d", &book.date);
	printf("����������磺");
	scanf_s("%s", book.publisher);

	printf("\n==========����¼�����===========");

	printf("������%s\n", book.title);
	printf("���ߣ�%s\n", book.auther);
	printf("�۸�%f\n", book.price);
	printf("���ڣ�%d\n", book.date);
	printf("�����磺%s\n", book.publisher);
	system("pause");
	return 0;
}