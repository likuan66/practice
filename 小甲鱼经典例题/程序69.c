//��Ŀ����n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int n;
	printf("������������\n");
	scanf("%d", &n);
	int num[50];
	int i, k, m, *p;
	p = num;
	for (i = 0; i < n; i++)
	{
		*(p + i) = i + 1;    //��ÿ���˽�������
	}
	i = 0;//i��ʾÿ��ѭ���ļ�����
	k = 0;//kΪ1��2��3��������
	m = 0;//m��ʾ��̭������
	while (m < n - 1)
	{
		if (*(p + i) != 0)
		{
			k++;
		}
		if (k == 3)//���˳��˵ı����Ϊ0
		{
			*(p + i) = 0;
			k = 0;
			m++;
		}
		i++;
		if (i == n)
		{
			i = 0;//������β��i�ظ���0
		}
	}
	while (*p == 0)
	{
		p++;
	}
	printf("�ܻ�����ǣ�%d��\n", *p);
	
	system("pause");
	return 0;
}