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
	{ 2019, 10, 21 },
	"清华大学出版社",
};


int main()
{
	struct Book *pt;
	pt = &book;
	printf("书名：%s\n", (*pt).title);//或者pt->title
	printf("作者：%s\n", (*pt).auther);
	printf("价格：%lf\n", (*pt).price);
	printf("日期：%d-%d-%d\n", (*pt).date.year, (*pt).date.mounth, (*pt).date.day);
	printf("出版社：%s\n", (*pt).publisher);
	system("pause");
	return 0;
}