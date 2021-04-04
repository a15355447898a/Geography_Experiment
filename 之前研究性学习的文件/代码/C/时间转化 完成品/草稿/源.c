#pragma warning(disable:4996)//用于忽略scanf函数的报错
#include <stdio.h>
long 剩余的秒数;
int 分钟数整数;
int 小时;
int 天整数;
int 是否为闰年值;
int 月份;
int 日;
int 判断是否为闰年(int year)//X==1是闰年，X==0不是闰年
{
	int X;
	if (year % 400 == 0)
	{
		X = 1;
	}
	else
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			X = 1;
		}

		else
		{
			X = 0;
		}

	}
	是否为闰年值 = X;
	return X;
}
int conversion(long a)//转化秒
{
    double 分钟数小数;
	分钟数小数 = a / 60;
	分钟数整数 = (int)分钟数小数;
    int 原始的分钟数 = 分钟数整数;
    while (分钟数整数 >= 60)
    {
	  分钟数整数 = 分钟数整数 - 60;
    }
	剩余的秒数 = a - 原始的分钟数 * 60;
	int 小时计算过渡;
	小时计算过渡 = a - 分钟数整数 * 60 - 剩余的秒数;
	小时 = 小时计算过渡 /3600;
	int 原始的小时 = 小时;
	while (小时 >= 24)
	{
		小时 = 小时 - 24;
	}
	double 天小数 = 原始的小时 / 24;
	天整数 = (int)天小数;
	return 剩余的秒数;//, 分钟数整数,小时, 天整数
}
int 判断月份(int b)
{
	int 上一个月的天数;
	if (是否为闰年值 == 0)//不是闰年
	{
		if (335 <= b && b <= 365)
		{
			月份 = 12;
			上一个月的天数 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
			日 = b - 上一个月的天数;
		}
		if (305 <= b && b <= 334)
		{
			月份 = 11;
			上一个月的天数 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
			日 = b - 上一个月的天数;
		}
		if (274 <= b && b <= 304)
		{
			月份 = 10;
			上一个月的天数 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
			日 = b - 上一个月的天数;
		}
		if (244 <= b && b <= 273)
		{
			月份 = 9;
			上一个月的天数 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
			日 = b - 上一个月的天数;
		}
		if (213 <= b && b <= 243)
		{
			月份 = 8;
			上一个月的天数 = 31 + 28 + 31 + 30 + 31 + 30 + 31;
			日 = b - 上一个月的天数;
		}
		if (182 <= b && b <= 212)
		{
			月份 = 7;
			上一个月的天数 = 31 + 28 + 31 + 30 + 31 + 30;
			日 = b - 上一个月的天数;
		}
		if (152 <= b && b <= 181)
		{
			月份 = 6;
			上一个月的天数 = 31 + 28 + 31 + 30 + 31;
			日 = b - 上一个月的天数;
		}
		if (121 <= b && b <= 151)
		{
			月份 = 5;
			上一个月的天数 = 31 + 28 + 31 + 30;
			日 = b - 上一个月的天数;
		}
		if (91 <= b && b <= 120)
		{
			月份 = 4;
			上一个月的天数 = 31 + 28 + 31;
			日 = b - 上一个月的天数;
		}
		if (60 <= b && b <= 90)
		{
			月份 = 3;
			上一个月的天数 = 31 + 28;
			日 = b - 上一个月的天数;
		}
		if (32 <= b && b <= 59)
		{
			月份 = 2;
			上一个月的天数 = 31;
			日 = b - 上一个月的天数;
		}
		if (0 <= b && b <= 31)
		{
			月份 = 1;
			上一个月的天数 = 0;
			日 = b - 上一个月的天数;
		}
	}
	else//闰年
	{
		if (336 <= b && b <= 366)
		{
			月份 = 12;
			上一个月的天数 = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
			日 = b - 上一个月的天数;
		}
		if (306 <= b && b <= 335)
		{
			月份 = 11;
			上一个月的天数 = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
			日 = b - 上一个月的天数;
		}
		if (275 <= b && b <= 305)
		{
			月份 = 10;
			上一个月的天数 = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
			日 = b - 上一个月的天数;
		}
		if (245 <= b && b <= 274)
		{
			月份 = 9;
			上一个月的天数 = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
			日 = b - 上一个月的天数;
		}
		if (214 <= b && b <= 244)
		{
			月份 = 8;
			上一个月的天数 = 31 + 29 + 31 + 30 + 31 + 30 + 31;
			日 = b - 上一个月的天数;
		}
		if (183 <= b && b <= 213)
		{
			月份 = 7;
			上一个月的天数 = 31 + 29 + 31 + 30 + 31 + 30;
			日 = b - 上一个月的天数;
		}
		if (153 <= b && b <= 182)
		{
			月份 = 6;
			上一个月的天数 = 31 + 29 + 31 + 30 + 31;
			日 = b - 上一个月的天数;
		}
		if (122 <= b && b <= 152)
		{
			月份 = 5;
			上一个月的天数 = 31 + 29 + 31 + 30;
			日 = b - 上一个月的天数;
		}
		if (92 <= b && b <= 121)
		{
			月份 = 4;
			上一个月的天数 = 31 + 29 + 31;
			日 = b - 上一个月的天数;
		}
		if (61 <= b && b <= 91)
		{
			月份 = 3;
			上一个月的天数 = 31 + 29;
			日 = b - 上一个月的天数;
		}
		if (32 <= b && b <= 60)
		{
			月份 = 2;
			上一个月的天数 = 31;
			日 = b - 上一个月的天数;
		}
		if (0 <= b && b <= 31)
		{
			月份 = 1;
			上一个月的天数 = 0;
			日 = b - 上一个月的天数;
		}
	}
	return 月份;
}
int main()
{
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
	long second;
	printf("请输人秒数：\n");
	scanf("%ld", &second);
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
		conversion(second);
		判断月份(天整数);
        /*年份（年）1（月）1（日）0（小时）0（分钟）0（秒）*/
		int A = 年份;
		int B = 月份;//月
		int C = 日;//日
		int D = 小时;//小时
		int E = 分钟数整数;//分钟
		int F = 剩余的秒数;//秒
		printf("%d年 ",A);
		printf("%d月 ", B);
		printf("%d日 ", C);
		printf("%d时 ", D);
		printf("%d分 ", E);
		printf("%d秒 ", F);
	}
	getchar();
	return 0;
}