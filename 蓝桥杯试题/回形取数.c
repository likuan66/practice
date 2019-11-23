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
	//**********以上是数的输入**************
	int t = 0;//t用于记录圈数
	i = 0;//数的横坐标
	j = 0;//数的纵坐标
	while (count) 
	{
		//省略if(i==t&&j==t&&count)，判断坐标是否在左上角的节点，因为条件必然成立
		while (i<n - t&&count) 
		{//从左上角向下走
			if (i == 0 && j == 0) {//第一个数的输出格式
				printf("%d", a[0][0]);
				i++;
			}
			else
			{
				printf(" %d", a[i++][j]);
			}
			count--;
		}
		i--;  //上面的while循环结束后，i多加了一次1，所以i--
		j++;  //左下角第一个元素已经打印过了，则j++
		//省略if(i==n-1-t&&j==t)，左下角的节点的判断
		while (j<m - t&&count) 
		{//向右走
			printf(" %d", a[i][j++]);
			count--;
		}
		j--;  //上面的while循环结束后，j多加了一次1，所以j--
		i--;  //右下角第一个元素已经打印过了，则i--
		//省略if(i==n-1-t&&j==m-1-t&&count)，右下角节点的判断
		while (i >= t&&count) 
		{//向上走
			printf(" %d", a[i--][j]);
			count--;
		}
		i++; 
		j--;
		//省略if(i==t&&j==m-1-t)，右上角节点的判断
		while (j>t&&count) 
		{//向左走
			printf(" %d", a[i][j--]);
			count--;
		}
		j++;
		i++;
		t++;//圈数加一
	}
	system("pause");
	return 0;
}
