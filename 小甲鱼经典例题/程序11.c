//��Ŀ���ŵ����⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�
//С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣�
//���ӵĹ���Ϊ����1,1,2,3,5,8,13,21....
#include<stdio.h>
#include<Windows.h>

int main()
{
	int mounth, x, i = 1, j = 0;
	for (mounth = 1; mounth <= 12; mounth++)
	{
		x = i;
		printf("�� %d ������ %d ֻ���ӣ�\n", mounth, 2 * i);
		i = i + j;
		j = x;
	}
	system("pause");
	return 0;
}