/*���ڳ���Ϊ5λ��һ��01����ÿһλ��������0��1��һ����32�ֿ��ܡ����ǵ�ǰ�����ǣ�
00000
00001
00010
00011
00100
�밴��С�����˳�������32��01����*/
#include<stdio.h>
#include<Windows.h>
int main()
{
	int a,b,c,d,e;
	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 2; b++)
		{
			for (c = 0; c < 2; c++)
			{
				for (d = 0; d < 2; d++)
				{
					for (e = 0; e < 2; e++)
					{
						printf("%d%d%d%d%d\n", a, b, c, d, e);
					}
				}
			}
		}
	}


	system("pause");
	return 0;
}