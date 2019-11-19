#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int v1, v2, t, s, l,s1=0,s2=0,i=0;   
	scanf("%d%d%d%d%d", &v1, &v2, &t, &s, &l);   
	while (s1 < l&&s2 < l)
	{
		s1 += v1;   //s1表示兔子运动距离
		s2 += v2;   //s2表示乌龟运动距离
		i++;
		if (s1 == l || s2 == l)  //如果有一个跑完了就结束了
		{
			break;
		}
		if (s1 - s2 >= t)  //如果兔子发现自己领先乌龟t米，则休息s秒
		{
			s1 -= v1*s;   //将兔子这段休息的时间运动的距离减掉
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