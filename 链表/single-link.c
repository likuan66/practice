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
	printf("����������:");
	scanf_s("%s", book->title);
	printf("���������ߣ�\n");
	scanf_s("%s", book->auther);
}
void addBook(struct Book **library)
{
	struct Book *book, *temp;
	book = (struct Book *)malloc(sizeof(struct Book));
	if (book == NULL)
	{
		printf("�ڴ����ʧ�ܣ�\n");
		exit(1);//ǿ���˳�
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
		printf("������%s", book ->title);
		printf("����: %s", book->auther);
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
		printf("�����Ƿ���Ҫ¼���鼮��Ϣ(Y/N)��");
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
	printf("�����Ƿ���Ҫ��ӡͼ����Ϣ(Y/N):");
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