//��Ŀ���������ͼ����
#include<stdio.h>
#include<Windows.h>

int main()
{
	system("color 1F");  // �趨��ʾ��Ϊ���װ���
	system("mode con cols=80 lines=30");  //�̶���ʾ��ߴ�
	char a = 176, b = 219;
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", a, a, b, a, a);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	system("pause");
	return 0;
}