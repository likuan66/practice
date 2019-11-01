#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)
#define MAX 1024
struct Person
{
	char name[40];
	char phone[20];
	struct Person *next;
};

struct Person *pool = NULL;
int count;

void getInput(struct Person *person);
void printPerson(struct Person *person);
void addPerson(struct Person **contacts);
void changePerson(struct Person *contacts);
void delPerson(struct Person **contacts);
struct Person *findPerson(struct Person *contacts);
void displayContacts(struct Person *contacts);
void releaseContacts(struct Person **contacts);
void releasePooll(void);

void getInput(struct Person *person)
{
	printf("������������\n");
	scanf("%s", person->name);
	printf("������绰:\n");
	scanf("%s", person->phone);
}
void printPerson(struct Person *person)
{
	printf("��ϵ�ˣ�%s\n", person->name);
	printf("�绰��%s\n", person->phone);
}
void addPerson(struct Person **contacts)
{
	struct Person *person;
	struct Person *temp;

	//����ڴ�طǿ���ֱ�Ӵ������ȡ�ռ�
	if (pool != NULL)
	{
		person = pool;
		pool = pool->next;
		count--;
	}
	//����ڴ�ռ�Ϊ�գ������malloc���������µ��ڴ�ռ�
	else
	{
		person = (struct Person *)malloc(sizeof(struct Person));
		if (person == NULL)
		{
			printf("�ڴ����ʧ��!\n");
			exit(1);
		}
	}
	getInput(person);
	//��person��ͷ�巨��ӵ�ͨѶ¼��
	if (*contacts != NULL)
	{
		temp = *contacts;
		*contacts = person;
		person->next = temp;
	}
	else
	{
		*contacts = person;
		person->next = NULL;
	}
}
void changePerson(struct Person *contacts)
{
	struct Person *person;
	person = findPerson(contacts);
	if (person == NULL)
	{
		printf("�Ҳ�������ϵ��!\n");
	}
	else
	{
		printf("�������µ���ϵ�绰:\n");
		scanf("%s", person->phone);
	}

}
struct Person *findPerson(struct Person *contacts)
{
	struct Person *current;
	char input[40];
	printf("��������ϵ�ˣ�\n");
	scanf("%s", input);
	current = contacts;
	while (current != NULL&&strcmp(current->name, input))
	{
		current = current->next;
	}
	return current;
}
void delPerson(struct Person **contacts)
{
	struct Person *temp;
	struct Person *person;
	struct Person *current;
	struct Person *previous;

	//���ҵ���ɾ���Ľڵ�ָ��
	person = findPerson(*contacts);
	if (person == NULL)
	{
		printf("�Ҳ�������ϵ�ˣ�\n");
	}
	else
	{
		current = *contacts;
		previous = NULL;
		//current��λ����ɾ���Ľڵ�
		while (current != NULL&&current != person)
		{
			previous = current;
			current = current->next;
		}
		if (previous == NULL)
		{
			//��ɾ���Ľڵ��ǵ�һ�� �ڵ�
			*contacts = current->next;
		}
		else
		{
			//��ɾ���Ľڵ㲻�ǵ�һ�� �ڵ�
			previous->next = current->next;
		}
		//�ж��ڴ���ǲ����п�λ
		if (count < MAX)
		{
			if (pool != NULL)
			{
				temp = pool;
				pool = person;
				person = temp;
			}
			else
			{
				pool = person;
				person->next = NULL;
			}
			count++;
		}
		else
		{
			free(person);
		}
		
	}
}
void displayContacts(struct Person *contacts)
{
	struct Person*current;
	current = contacts;
	while (current != NULL)
	{
		printPerson(current);
		current = current->next;
	}
}
void releaseContacts(struct Person **contacts)
{
	struct Person *temp;
	while (*contacts != NULL)
	{
		temp = *contacts;
		*contacts = (*contacts)->next;
		free(temp);
	}
}
void releasePooll(void)
{
	struct Person *temp;
	while (pool != NULL)
	{
		temp = pool;
		pool = pool->next;
		free(temp);
	}
}

int main()
{
	int code;
	struct Person *contacts = NULL;
	struct Person *person;
	printf("��ӭʹ��ͨѶ¼�������|\n");
	printf("--- 1:�����µ���ϵ�� ---|\n");
	printf("--- 2:����������ϵ�� ---|\n");
	printf("--- 3:����������ϵ�� ---|\n");
	printf("--- 4:ɾ��������ϵ�� ---|\n");
	printf("--- 5:��ʾ��ǰͨѶ¼ ---|\n");
	printf("--- 6:�˳�ͨѶ¼���� ---|\n");
	int select;
	int quit = 0;
	while (!quit)
	{
		printf("���������ѡ��\n");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			addPerson(&contacts);
			break;
		case 2:
			person = findPerson(contacts);
			if (person == NULL)
			{
				printf("�Ҳ�������ϵ��:\n");
			}
			else
			{
				printPerson(person);
			}
			break;
		case 3:
			changePerson(contacts);
			break;
		case 4:
			delPerson(&contacts);
			break;
		case 5:
			displayContacts(contacts);
			break;
		case 6:
			printf("�˳�ͨѶ¼����!\n");
			quit = 1;
			break;
		}
	}
	releaseContacts(&contacts);
	releasePooll();

	system("pause");
	return 0;
}