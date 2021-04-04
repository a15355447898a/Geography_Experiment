#pragma warning(disable:4996)//用于忽略scanf函数的报错
#include <stdio.h>
#include "转化时间.h"
#include "判断月份.h"
#include "判断是否为闰年.h"
int main()
{
	int 天整数;
	int 年份;
	printf("请输人年份：\n");
	scanf("%d", &年份);
	int b = 判断是否为闰年(年份);
	if (b == 1)
	{
		printf("此年是闰年\n");
	}
	else
	{
		printf("此年不是闰年\n");
	}
	int second;
	printf("请输人天数和小时数（天数在前，小时数在后，中间用空格隔开）：\n");
	int 天数和小时数的数组[2];//天，小时
	for (int x=0;x<2;x++)
	{
		scanf("%d", &天数和小时数的数组[x]);
	}
	second = 天数和小时数的数组[1]*60*60;
	if (second >= 31536000 && b == 0)//判断是否超过不闰年的秒数
	{
		printf("秒数超过或等于一年的时间\n");
	}
	if (second >= 31622400 && b == 1)//判断是否超过闰年的秒数
	{
		printf("秒数超过或等于一年的时间\n");
	}
	else
	{
		int 输出转化后的时间数组[5];//second,天整数,小时,分钟数整数,剩余的秒数
		输出转化后的时间数组[0] = second;
		转化时间(输出转化后的时间数组);
		天整数 = 输出转化后的时间数组[1];
		int 月份和日的数组[4];//天整数,年份,月份,日
		月份和日的数组[0] = 天整数;
		月份和日的数组[1] = 年份;
		判断月份(月份和日的数组);
		/*年份（年）1（月）1（日）0（小时）0（分钟）0（秒）*/
		int A = 年份;
		int B = 月份和日的数组[2];//月
		int C = 月份和日的数组[3]+ 天数和小时数的数组[0];//日
		int D = 输出转化后的时间数组[2];//小时
		int E = 输出转化后的时间数组[3];//分钟
		int F = 输出转化后的时间数组[4];//秒
		printf("%d年 ", A);
		printf("%d月 ", B);
		printf("%d日 ", C);
		printf("%d时 ", D);
		printf("%d分 ", E);
		printf("%d秒 ", F);
	}
	getchar();
	return 0;
}