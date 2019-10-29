
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
	printf("������������\n");
	scanf("%s", book->title);
	printf("����������:\n");
	scanf("%s", book->auther);
}
void addBook(struct Book **library)
{
	struct Book *book;
	static struct Book *tail;//��̬���� ��¼������β����λ��
	book = (struct Book *)malloc(sizeof(struct Book));
	if (book == NULL)
	{
		printf("�ڴ����ʧ��\n");
		exit(1);
	}
	getInput(book);
	if (*library != NULL)
	{
		//temp = *library;
		////���嵥�����β��λ��
		//while (temp->next != NULL)
		//{
		//	temp = temp->next;
		//}
		////��������
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
		printf("����:%s\n", book->title);
		printf("����:%s\n", book->auther);
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
		if (!strcmp(book->title, target) || !strcmp(book->auther, target))//�ҵ�����ƥ�����������ҵ���������ƥ������
		{
			break;
		}
		book = book->next;
	}
	return book;
}
void printBook(struct Book *book)
{
	printf("����:%s\n", book->title);
	printf("����:%s\n", book->auther);
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
		printf("�����Ƿ�Ҫ¼����ϢY/N��");
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
	printf("�����Ƿ���Ҫ��ӡͼ����ϢY/N��\n");
	do
	{
		ch = getchar();
	} while (ch != 'Y'&&ch != 'N');
	if (ch == 'Y')
	{
		printlibrary(library);
	}
	printf("\n�����������������ߣ�");
	scanf("%s", input);
	book = searchBook(library, input);
	if (book == NULL)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		do
		{
			printf("���ҵ�������������.\n");
			printBook(book);
		} while ((book = searchBook(book->next, input)) != NULL);
	}
	releaselibrary(&library);
	system("pause");
	return 0;
}