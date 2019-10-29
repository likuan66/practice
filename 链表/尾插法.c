//单链表尾插法
//单链表头插法

#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#pragma warning(disable:4996)

struct Book
{
	char title[10];
	char auther[20];
	struct Book *next;
};
void getInput(struct Book *book);
void addBook(struct Book **library);
void printlibrary(struct Book *library);
void releaselibrary(struct Book **library);

void getInput(struct Book *book)
{
	printf("请输入书名：\n");
	scanf("%s", book->title);
	printf("请输入作者:\n");
	scanf("%s", book->auther);
}
void addBook(struct Book **library)
{
	struct Book *book;
	static struct Book *tail;//静态变量 记录单链表尾部的位置
	book = (struct Book *)malloc(sizeof(struct Book));
	if (book == NULL)
	{
		printf("内存分配失败\n");
		exit(1);
	}
	getInput(book);
	if (*library != NULL)
	{
		//temp = *library;
		////定义单链表的尾部位置
		//while (temp->next != NULL)
		//{
		//	temp = temp->next;
		//}
		////插入数据
		//temp->next = book;
		//book->next = NULL;
		tail->next = book;
		book->next = NULL;
	}
	else
	{
		*library = book;
		book->next = NULL;
	}
	tail = book;
}
void printlibrary(struct Book *library)
{
	struct Book *book;
	int count = 1;
	book = library;
	while (book != NULL)
	{
		printf("Book:%d\n", count);
		printf("书名:%s\n", book->title);
		printf("作者:%s\n", book->auther);
		book = book->next;
		count++;
	}
}
void releaselibrary(struct Book **library)
{
	struct Book *temp;
	while (*library != NULL)
	{
		temp = *library;
		*library = (*library)->next;
		free(temp);
	}
}
int main()
{
	struct Book *library = NULL;
	int ch;
	while (1)
	{
		printf("请问是否要录入信息Y/N：");
		do
		{
			ch = getchar();
		} while (ch != 'Y'&&ch != 'N');
		if (ch == 'Y')
		{
			addBook(&library);
		}
		else
		{
			break;
		}
	}
	printf("请问是否需要打印图书信息Y/N：\n");
	do
	{
		ch = getchar();
	} while (ch != 'Y'&&ch != 'N');
	if (ch == 'Y')
	{
		printlibrary(library);
	}
	releaselibrary(&library);
	system("pause");
	return 0;
}