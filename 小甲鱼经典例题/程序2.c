/*��Ŀ����ҵ���ŵĽ������������ɡ�����(I)���ڻ����10��Ԫʱ���������10 % ��
�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣��ɿ���
��7.5%��20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��40��60��֮��ʱ����
40��Ԫ�Ĳ��֣������3%��60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%������
100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɣ��Ӽ������뵱������I����Ӧ���Ž���������*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	long int I;
	printf("�����뵱�µ�����I:\n");
	scanf("%ld", &I);
	int bonus = 0;
	int bonus1,bonus2,bonus3,bonus5,bonus4,bonus6;
	bonus1 = I*0.1;
	bonus2 = bonus1 + (I - 100000)*0.075;
	bonus3 = bonus2 + (I - 200000)*0.05;
	bonus4 = bonus3 + (I - 400000)*0.03;
	bonus5 = bonus4 + (I - 600000)*0.015;
	bonus6 = bonus5 + (I - 1000000)*0.01;
	if (I <= 100000)
	{
		bonus = bonus1;
	}
	else if (I > 100000 && I <= 200000)
	{
		bonus = bonus2;
	}
	else if (I > 200000 && I <= 400000)
	{
		bonus = bonus3;
	}
	else if (I > 400000 && I <= 600000)
	{
		bonus = bonus4;
	}
	else if (I > 600000 && I <= 1000000)
	{
		bonus = bonus5;
	}
	else
	{
		bonus = bonus6;
	}
	printf("%d\n", bonus);
	system("pause");
	return 0;
}