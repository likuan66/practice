
#include<stdio.h>
#include<windows.h>

int main()
{
	int num = 123;
	int *pi = &num;
	char *ps = "likuan";
	void *pv;

	pv = pi;
	printf("pi:%p,pv:%p\n", pi, pv);
	//printf("*pv:%d\n", *pv); ��Ҫ��void���͵�ָ����н����� ��ӦΪvoid�����ǲ�ȷ������
	printf("*pv:%d\n",*(int *)pv);//ǿ������ת������void��ָ��ת��Ϊint��
	pv = ps;
	printf("ps:%p,pv:%p\n", ps, pv);
	printf("pv:%s\n", pv);//�ַ����Ƚ�����
	printf("pv:%s\n", (char *)pv);

	/*���κ����͵�ָ��ת��Ϊvoid���͵�ָ����ok��   
	����void���͵�ָ��ת��Ϊ�������͵�ָ����Ҫ��ǿ������ת��*/

	system("pause");
	return 0;
}