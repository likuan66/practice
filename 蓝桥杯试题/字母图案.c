/*������ĸ�������һЩ������ͼ�Σ����������һ�����ӣ�
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
����һ��5��7�е�ͼ�Σ����ҳ����ͼ�εĹ��ɣ������һ��n��m�е�ͼ�Ρ�*/
#include <stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#include <math.h>
int main()

{    
	int i, j, n, m;    
	scanf("%d%d", &n, &m);    
	for (i = 0; i < n; i++)    
	{        
		for (j = 0; j < m; j++)        
		{             
			printf("%c", abs(i-j)+'A');//abs��������i-j���ľ���ֵ         
		}         printf("\n");   
	}    
	system("pause");
	return 0;
}
