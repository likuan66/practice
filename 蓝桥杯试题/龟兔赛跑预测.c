#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int v1, v2, t, s, l,s1=0,s2=0,i=0;   
	scanf("%d%d%d%d%d", &v1, &v2, &t, &s, &l);   
	while (s1 < l&&s2 < l)
	{
		s1 += v1;   //s1��ʾ�����˶�����
		s2 += v2;   //s2��ʾ�ڹ��˶�����
		i++;
		if (s1 == l || s2 == l)  //�����һ�������˾ͽ�����
		{
			break;
		}
		if (s1 - s2 >= t)  //������ӷ����Լ������ڹ�t�ף�����Ϣs��
		{
			s1 -= v1*s;   //�����������Ϣ��ʱ���˶��ľ������
		}
	}
	if (s1 > s2)
	{
		printf("R\n");
	}
	else if (s1 < s2)
	{
		printf("T\n");
	}
	else
	{
		printf("D\n");
	}
	printf("%d", i);
	system("pause");
	return 0;
}