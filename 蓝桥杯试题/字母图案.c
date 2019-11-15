/*利用字母可以组成一些美丽的图形，下面给出了一个例子：
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
这是一个5行7列的图形，请找出这个图形的规律，并输出一个n行m列的图形。*/
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
			printf("%c", abs(i-j)+'A');//abs函数是求（i-j）的绝对值         
		}         printf("\n");   
	}    
	system("pause");
	return 0;
}
