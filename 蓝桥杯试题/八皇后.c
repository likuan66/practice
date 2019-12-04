#include<stdio.h>
#include<windows.h>
#define N 8

int count = 0;//����
int arr[N][N] = { 0 };

int isTrue(int a, int b)
{
	int t = 0;
	//�����ж�
	for (t = a - 1; t >= 0; t--)
	{
		if (arr[t][b] == 1)
		{
			return 0;
		}
	}
	// �����ж���
	for (t = b - 1; t >= 0; t--){
		if (arr[a][t] == 1)
		{
			return 0;
		}
			
	}

	int m, n;
	// �������ж� 
	for (m = a - 1, n = b - 1; m >= 0 && n >= 0; m--, n--)
	{
		if (arr[m][n] == 1)
		{
			return 0;
		}
	}
	// �������� 
	for (m = a - 1, n = b + 1; m >= 0 && n<N; m--, n++)
	{
		if (arr[m][n] == 1)
		{
			return 0;
		}
	}
	return 1;
}

void print()
{
	count++;
	printf("����%d�ַ���\n",count);
	int a, b;
	for (a = 0; a < N; a++)
	{
		for (b = 0; b < N; b++)
		{
			if (arr[a][b] == 0)
			{
				printf("*");
			}
			else if (arr[a][b] == 1)
			{
				printf("#");
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void fun(int m)
{
	if (m == N)
	{
		print();//��ӡ
		return;  //�ݹ����
	}
	int i;
	for (i = 0; i < N; i++)
	{
		if (isTrue(m, i))
		{
			arr[m][i] = 1;//��1��ʾ��λ���ǻʺ�
			fun(m + 1);
			arr[m][i] = 0;//0��ʾ��λ���޻ʺ�
		}
	}
}


int main()
{
	fun(0);
	system("pause");
	return 0;
}