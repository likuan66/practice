//题目：创建一个链表。
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
	link ptr, head;
	int num, i;
	ptr = (link)malloc(sizeof(node));
	head=ptr;
	printf("请输入5个数：\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		ptr->data = num;
		ptr->next = (link)malloc(sizeof(node));
		if (i == 4)
		{
			ptr->next = NULL;
		}
		else
		{
			ptr = ptr->next;
		}
	}
	ptr = head;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
	system("pause");
	return 0;
}