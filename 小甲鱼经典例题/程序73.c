//题目：反向输出一个链表。
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
struct list
{
	int data;
	struct list *next;
};
typedef struct list node;
typedef node *link;
int main()
{
	link head, ptr, tail;
	int num, i;
	tail = (link)malloc(sizeof(node));
	tail->next = NULL;
	ptr = tail;
	printf("请输入5个整数：\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		ptr->data = num;
		head = (link)malloc(sizeof(node));
		head->next = ptr;
		ptr = head;
	}
	ptr = ptr->next;
	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}

	system("pause");
	return 0;
}