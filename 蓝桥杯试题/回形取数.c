#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main() {
	int n, m, count;
	scanf("%d%d", &n, &m);
	count = n*m;
	int a[200][200], i, j;
	for (i = 0; i<n; i++) {
		for (j = 0; j<m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	//**********��������������**************
	int t = 0;//t���ڼ�¼Ȧ��
	i = 0;//���ĺ�����
	j = 0;//����������
	while (count) 
	{
		//ʡ��if(i==t&&j==t&&count)���ж������Ƿ������ϽǵĽڵ㣬��Ϊ������Ȼ����
		while (i<n - t&&count) 
		{//�����Ͻ�������
			if (i == 0 && j == 0) {//��һ�����������ʽ
				printf("%d", a[0][0]);
				i++;
			}
			else
			{
				printf(" %d", a[i++][j]);
			}
			count--;
		}
		i--;  //�����whileѭ��������i�����һ��1������i--
		j++;  //���½ǵ�һ��Ԫ���Ѿ���ӡ���ˣ���j++
		//ʡ��if(i==n-1-t&&j==t)�����½ǵĽڵ���ж�
		while (j<m - t&&count) 
		{//������
			printf(" %d", a[i][j++]);
			count--;
		}
		j--;  //�����whileѭ��������j�����һ��1������j--
		i--;  //���½ǵ�һ��Ԫ���Ѿ���ӡ���ˣ���i--
		//ʡ��if(i==n-1-t&&j==m-1-t&&count)�����½ǽڵ���ж�
		while (i >= t&&count) 
		{//������
			printf(" %d", a[i--][j]);
			count--;
		}
		i++; 
		j--;
		//ʡ��if(i==t&&j==m-1-t)�����Ͻǽڵ���ж�
		while (j>t&&count) 
		{//������
			printf(" %d", a[i][j--]);
			count--;
		}
		j++;
		i++;
		t++;//Ȧ����һ
	}
	system("pause");
	return 0;
}
