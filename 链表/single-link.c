#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#pragma warning(disable:4996)
struct Book
{
	char title[120];
	char auther[40];
	struct Book *next;
};
void getInput(struct Book *book)
{
	printf("请输入书名:");
	scanf_s("%s", book->title);
	printf("请输入作者：\n");
	scanf_s("%s", book->auther);
}
void addBook(struct Book **library)
{
	struct Book *book, *temp;
	book = (struct Book *)malloc(sizeof(struct Book));
	if (book == NULL)
	{
		printf("内存分配失败！\n");
		exit(1);//强制退出
	}
	getInput(book);
	if (*library != NULL)
	{
		temp = *library;
		*library = book;
		book->next = temp;
	}
	else
	{
		*library = book;
		book->next = NULL;
	}
}
void printlibrary(struct Book *library)
{
	struct Book *book;
	int count = 1;
	book = library;
	while (book != NULL)
	{
		printf("Book%d:", count);
		printf("书名：%s", book ->title);
		printf("作者: %s", book->auther);
		book = book->next;
		count++;
	}
}
void releaselibrary(struct Book *library)
{
	while (library != NULL)
	{
		free(library);
		library = library->next;
	}
}
int main()
{
	struct Book *library = NULL;
	int ch;
	while (1)
	{
		printf("请问是否需要录入书籍信息(Y/N)：");
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
	printf("请问是否需要打印图书信息(Y/N):");
	do
	{
		ch = getchar();
	} while (ch != 'Y'&&ch != 'N');
	if (ch == 'Y')
	{
		printlibrary(library);
	}
	releaselibrary(library);

	system("pause");
	return 0;
}