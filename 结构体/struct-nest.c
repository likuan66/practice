#include<stdio.h>
#include<Windows.h>

struct Date
{
	int year;
	int mounth;
	int day;
};
struct Book
{
	char title[120];
	char auther[40];
	double price;
	struct Date date;
	char publisher[40];
} book = {
	"���μ�",
	"��ж�",
	48.8,
	{2019, 10, 21 },
	"�廪��ѧ������",
};


int main()
{
	printf("������%s\n", book.title);
	printf("���ߣ�%s\n", book.auther);
	printf("�۸�%lf\n", book.price);
	printf("���ڣ�%d-%d-%d\n", book.date.year,book.date.mounth,book.date.day);
	printf("�����磺%s\n", book.publisher);
	system("pause");
	return 0;
}