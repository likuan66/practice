#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
struct Node
{
	int value;
	struct Node *next;
};

void insertNode(struct Node **head, int value)
{
	struct Node *previous;//指向比value小的指针
	struct Node *current;//指向比value大的指针
	struct Node *new;
	current = *head;
	previous = NULL;
	while (current != NULL && current->value < value)
	{
		previous = current;
		current = current->next;
	}
	new = (struct Node *)malloc(sizeof(struct Node));
	if (new == NULL)
	{
		printf("内存分配失败！\n");
		exit(1);
	}
	new->value = value;
	new->next = current;
	if (previous == NULL)
	{
		*head = new;
	}
	else
	{
		previous->next = new;
	}

}

void printNode(struct Node *head)
{
	struct Node *current;
	current = head;
	while (current != NULL)
	{
		printf("%d ", current->value);
		current = current->next;
	}
	printf("\n");
}
int main()
{
	struct Node *head = NULL;
	int input;
	while (1)
	{
		printf("请输入一个整数（输入-1表示结束）：");
		scanf("%d", &input);
		if (input == -1)
		{
			break;
		}
		insertNode(&head, input);
		printNode(head);
	}
	system("pause");
	return 0;
}