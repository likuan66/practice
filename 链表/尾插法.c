//������β�巨
//������ͷ�巨

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
	releaselibrary(&library);
	system("pause");
	return 0;
}