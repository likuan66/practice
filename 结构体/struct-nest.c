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
	"西游记",
	"吴承恩",
	48.8,
	{2019, 10, 21 },
	"清华大学出版社",
};


int main()
{
	printf("书名：%s\n", book.title);
	printf("作者：%s\n", book.auther);
	printf("价格：%lf\n", book.price);
	printf("日期：%d-%d-%d\n", book.date.year,book.date.mounth,book.date.day);
	printf("出版社：%s\n", book.publisher);
	system("pause");
	return 0;
}