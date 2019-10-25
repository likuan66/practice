#include<stdio.h>
#include<Windows.h>

char *getWord(char c)
{
	switch (c)
	{
	case 'A': return "apple";
	case 'B': return "banana";
	case 'C': return "cat";
	case 'D': return "dag";
	default: return "none";
	}
}

int main()
{
	char input;
	printf("ÇëÊäÈëÒ»¸ö×ÖÄ¸£º");
	scanf_s("%c", &input);

	printf("%s\n", getWord(input));

	system("pause");
	return 0;
}