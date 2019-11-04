/*题目：企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，奖金可提10 % ；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可可提
成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；40万到60万之间时高于
40万元的部分，可提成3%；60万到100万之间时，高于60万元的部分，可提成1.5%，高于
100万元时，超过100万元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数？*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	long int I;
	printf("请输入当月的利润I:\n");
	scanf("%ld", &I);
	int bonus = 0;
	int bonus1,bonus2,bonus3,bonus5,bonus4,bonus6;
	bonus1 = I*0.1;
	bonus2 = bonus1 + (I - 100000)*0.075;
	bonus3 = bonus2 + (I - 200000)*0.05;
	bonus4 = bonus3 + (I - 400000)*0.03;
	bonus5 = bonus4 + (I - 600000)*0.015;
	bonus6 = bonus5 + (I - 1000000)*0.01;
	if (I <= 100000)
	{
		bonus = bonus1;
	}
	else if (I > 100000 && I <= 200000)
	{
		bonus = bonus2;
	}
	else if (I > 200000 && I <= 400000)
	{
		bonus = bonus3;
	}
	else if (I > 400000 && I <= 600000)
	{
		bonus = bonus4;
	}
	else if (I > 600000 && I <= 1000000)
	{
		bonus = bonus5;
	}
	else
	{
		bonus = bonus6;
	}
	printf("%d\n", bonus);
	system("pause");
	return 0;
}