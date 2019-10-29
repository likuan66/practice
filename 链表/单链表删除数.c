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
	struct Node *previous;//ָ���valueС��ָ��
	struct Node *current;//ָ���value���ָ��
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
		printf("�ڴ����ʧ�ܣ�\n");
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
void deleteNode(struct Node **head, int value)
{
	struct Node *previous;
	struct Node *current;
	current = *head;
	previous = NULL;
	while (current != NULL&&current->value != value)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
	{
		printf("�Ҳ���ƥ��Ľڵ�!\n");
		return;
	}
	else
	{
		if (previous == NULL)
		{
			*head = current->next;
		}
		else
		{
			previous->next = current->next;
		}
		free(current);
	}
}
int main()
{
	struct Node *head = NULL;
	int input;
	while (1)
	{
		printf("������һ������������-1��ʾ��������");
		scanf("%d", &input);
		if (input == -1)
		{
			break;
		}
		insertNode(&head, input);
		printNode(head);
	}
	printf("��ʼ����ɾ������.\n");
	while (1)
	{
		printf("������һ������������-1��ʾ��������");
		scanf("%d", &input);
		if (input == -1)
		{
			break;
		}
		deleteNode(&head, input);
		printNode(head);
	}
	system("pause");
	return 0;
}