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
	{ 2019, 10, 21 },
	"�廪��ѧ������",
};


int main()
{
	struct Book *pt;
	pt = &book;
	printf("������%s\n", (*pt).title);//����pt->title
	printf("���ߣ�%s\n", (*pt).auther);
	printf("�۸�%lf\n", (*pt).price);
	printf("���ڣ�%d-%d-%d\n", (*pt).date.year, (*pt).date.mounth, (*pt).date.day);
	printf("�����磺%s\n", (*pt).publisher);
	system("pause");
	return 0;
}