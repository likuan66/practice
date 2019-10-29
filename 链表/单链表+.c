
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<string.h>
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
struct Book *searchBook(struct Book *library, char *target);
void printBook(struct Book *book);
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

struct Book *searchBook(struct Book *library, char *target)
{
	struct Book *book;
	book = library;
	while (book != NULL)
	{
		if (!strcmp(book->title, target) || !strcmp(book->auther, target))//找到书名匹配的情况或者找到作者名字匹配的情况
		{
			break;
		}
		book = book->next;
	}
	return book;
}
void printBook(struct Book *book)
{
	printf("书名:%s\n", book->title);
	printf("作者:%s\n", book->auther);
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
	struct Book *book;
	int ch;
	char input[128];
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
	printf("\n请输入书名或者作者：");
	scanf("%s", input);
	book = searchBook(library, input);
	if (book == NULL)
	{
		printf("没找到\n");
	}
	else
	{
		do
		{
			printf("已找到符合条件的书.\n");
			printBook(book);
		} while ((book = searchBook(book->next, input)) != NULL);
	}
	releaselibrary(&library);
	system("pause");
	return 0;
}