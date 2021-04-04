#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
int Determine_letter_position(char X) //求字母的位置
{
    int Y=0;
    switch(X)
    {
        case 'A':Y=1;break;
        case 'a':Y=1;break;
        case 'B':Y=2;break;
        case 'b':Y=2;break;
        case 'C':Y=3;break;
        case 'c':Y=3;break;
        case 'D':Y=4;break;
        case 'd':Y=4;break;
        case 'E':Y=5;break;
        case 'e':Y=5;break;
        case 'F':Y=6;break;
        case 'f':Y=6;break;
        case 'G':Y=7;break;
        case 'g':Y=7;break;
        case 'H':Y=8;break;
        case 'h':Y=8;break;
        case 'I':Y=9;break;
        case 'i':Y=9;break;
        case 'J':Y=10;break;
        case 'j':Y=10;break;
        case 'K':Y=11;break;
        case 'k':Y=11;break;
        case 'L':Y=12;break;
        case 'l':Y=12;break;
        case 'M':Y=13;break;
        case 'm':Y=13;break;
        case 'N':Y=14;break;
        case 'n':Y=14;break;
        case 'O':Y=15;break;
        case 'o':Y=15;break;
        case 'P':Y=16;break;
        case 'p':Y=16;break;
        case 'Q':Y=17;break;
        case 'q':Y=17;break;
        case 'R':Y=18;break;
        case 'r':Y=18;break;
        case 'S':Y=19;break;
        case 's':Y=19;break;
        case 'T':Y=20;break;
        case 't':Y=20;break;
        case 'U':Y=21;break;
        case 'u':Y=21;break;
        case 'V':Y=22;break;
        case 'v':Y=22;break;
        case 'W':Y=23;break;
        case 'w':Y=23;break;
        case 'X':Y=24;break;
        case 'x':Y=24;break;
        case 'Y':Y=25;break;
        case 'y':Y=25;break;
        case 'Z':Y=26;break;
        case 'z':Y=26;break;
    }
    return Y;
}
int Judge_leap_year(int year) //X==1是闰年，X==0不是闰年
{
    int Leap_year_value_or_not;
    if (year % 400 == 0)
    {
        Leap_year_value_or_not = 1;
    }
    else
    {
        if (year % 4 == 0 && year % 100 != 0)
        {
            Leap_year_value_or_not = 1;
        }

        else
        {
            Leap_year_value_or_not = 0;
        }
    }
    return Leap_year_value_or_not;
}
void Judge_month(int d[]) //把天转化成月份
{
    int a = d[1];
    int b = d[0];
    int Days_of_last_month;
    int Month = 0;
    int day = 0;
    int c = Judge_leap_year(a);
    if (c == 0) //不是闰年
    {
        if (335 <= b && b <= 365)
        {
            Month = 12;
            Days_of_last_month = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            day = b - Days_of_last_month;
        }
        if (305 <= b && b <= 334)
        {
            Month = 11;
            Days_of_last_month = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            day = b - Days_of_last_month;
        }
        if (274 <= b && b <= 304)
        {
            Month = 10;
            Days_of_last_month = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            day = b - Days_of_last_month;
        }
        if (244 <= b && b <= 273)
        {
            Month = 9;
            Days_of_last_month = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
            day = b - Days_of_last_month;
        }
        if (213 <= b && b <= 243)
        {
            Month = 8;
            Days_of_last_month = 31 + 28 + 31 + 30 + 31 + 30 + 31;
            day = b - Days_of_last_month;
        }
        if (182 <= b && b <= 212)
        {
            Month = 7;
            Days_of_last_month = 31 + 28 + 31 + 30 + 31 + 30;
            day = b - Days_of_last_month;
        }
        if (152 <= b && b <= 181)
        {
            Month = 6;
            Days_of_last_month = 31 + 28 + 31 + 30 + 31;
            day = b - Days_of_last_month;
        }
        if (121 <= b && b <= 151)
        {
            Month = 5;
            Days_of_last_month = 31 + 28 + 31 + 30;
            day = b - Days_of_last_month;
        }
        if (91 <= b && b <= 120)
        {
            Month = 4;
            Days_of_last_month = 31 + 28 + 31;
            day = b - Days_of_last_month;
        }
        if (60 <= b && b <= 90)
        {
            Month = 3;
            Days_of_last_month = 31 + 28;
            day = b - Days_of_last_month;
        }
        if (32 <= b && b <= 59)
        {
            Month = 2;
            Days_of_last_month = 31;
            day = b - Days_of_last_month;
        }
        if (0 <= b && b <= 31)
        {
            Month = 1;
            Days_of_last_month = 0;
            day = b - Days_of_last_month;
        }
    }
    else //闰年
    {
        if (336 <= b && b <= 366)
        {
            Month = 12;
            Days_of_last_month = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            day = b - Days_of_last_month;
        }
        if (306 <= b && b <= 335)
        {
            Month = 11;
            Days_of_last_month = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            day = b - Days_of_last_month;
        }
        if (275 <= b && b <= 305)
        {
            Month = 10;
            Days_of_last_month = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            day = b - Days_of_last_month;
        }
        if (245 <= b && b <= 274)
        {
            Month = 9;
            Days_of_last_month = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
            day = b - Days_of_last_month;
        }
        if (214 <= b && b <= 244)
        {
            Month = 8;
            Days_of_last_month = 31 + 29 + 31 + 30 + 31 + 30 + 31;
            day = b - Days_of_last_month;
        }
        if (183 <= b && b <= 213)
        {
            Month = 7;
            Days_of_last_month = 31 + 29 + 31 + 30 + 31 + 30;
            day = b - Days_of_last_month;
        }
        if (153 <= b && b <= 182)
        {
            Month = 6;
            Days_of_last_month = 31 + 29 + 31 + 30 + 31;
            day = b - Days_of_last_month;
        }
        if (122 <= b && b <= 152)
        {
            Month = 5;
            Days_of_last_month = 31 + 29 + 31 + 30;
            day = b - Days_of_last_month;
        }
        if (92 <= b && b <= 121)
        {
            Month = 4;
            Days_of_last_month = 31 + 29 + 31;
            day = b - Days_of_last_month;
        }
        if (61 <= b && b <= 91)
        {
            Month = 3;
            Days_of_last_month = 31 + 29;
            day = b - Days_of_last_month;
        }
        if (32 <= b && b <= 60)
        {
            Month = 2;
            Days_of_last_month = 31;
            day = b - Days_of_last_month;
        }
        if (0 <= b && b <= 31)
        {
            Month = 1;
            Days_of_last_month = 0;
            day = b - Days_of_last_month;
        }
    }
    d[2] = Month;
    d[3] = day;
}
void Conversion_time(int a[]) //天整数,小时,分钟数整数,剩余的秒数
{
    int b = a[0];
    double Minutes_decimal;
    Minutes_decimal = b / 60;
    int Minutes_integer;
    Minutes_integer = (int)Minutes_decimal;
    int Original_minutes = Minutes_integer;
    while (Minutes_integer >= 60)
    {
        Minutes_integer = Minutes_integer - 60;
    }
    long Seconds_left;
    Seconds_left = b - Original_minutes * 60;
    int Hour_calculation_transition;
    Hour_calculation_transition = b - Minutes_integer * 60 - Seconds_left;
    int hour;
    hour = Hour_calculation_transition / 3600;
    int Original_hours = hour;
    while (hour >= 24)
    {
        hour = hour - 24;
    }
    double Day_decimal = Original_hours / 24;
    int Day_integer;
    Day_integer = (int)Day_decimal;
    a[1] = Day_integer;
    a[2] = hour;
    a[3] = Minutes_integer;
    a[4] = Seconds_left;
}
void Judge_location(char Array_of_inputs[]) //（0~3）位置，（4）列数（天），(5)行数（小时），(6)是否有问题的数
{
    int Output_letters = 0; //输出列数
    int Output_number = 0;  //输出行数
    int x = 1;              //1是正常，0是错误
    int Judge_number_1 = 0;
    int Judging_letters_1 = 0;
    gets(Array_of_inputs);
    for (int a = 0; Array_of_inputs[a] != '\0'; a++)
    {
        if ((Array_of_inputs[a] >= 'A' && Array_of_inputs[a] <= 'Z') || (Array_of_inputs[a] >= 'a' && Array_of_inputs[a] <= 'z'))
        {
            if (Judging_letters_1 == 0)
            {
                Output_letters = Determine_letter_position(Array_of_inputs[a]);
            }
            else
            {
                Output_letters = Output_letters * 26 + Determine_letter_position(Array_of_inputs[a]);
            }
            Judging_letters_1 = 1;
        }
        else if (Array_of_inputs[a] >= '0' && Array_of_inputs[a] <= '9')
        {
            if (Judge_number_1 == 0)
            {
                Output_number = Array_of_inputs[a] - 48;
            }
            else
            {
                Output_number = Output_number * 10 + Array_of_inputs[a] - 48;
            }
            Judge_number_1 = 1;
        }
        else
        {
            x = 0;
        }
    }
    Array_of_inputs[4] = Output_letters;
    Array_of_inputs[5] = Output_number;
    Array_of_inputs[6] = x;
}
int main()
{
    int Day_integer;
    int Particular_year;
    printf("请输人年份：\n");
    scanf("%d", &Particular_year);
    int b = Judge_leap_year(Particular_year);
    if (b == 1)
    {
        printf("此年是闰年\n");
    }
    else
    {
        printf("此年不是闰年\n");
    }
    int second;
    printf("请输人Excel的表格位置：\n");
    char Array_of_days_and_hours[6] = {0}; //（0~3）位置，（4）列数（天），(5)行数（小时），(6)是否有问题的数
    /*有问题的数：1是正常，0是错误*/
    gets(Array_of_days_and_hours);
    Judge_location(Array_of_days_and_hours);
    switch (Array_of_days_and_hours[6])
    {
     case 0:
     {
        printf("这个程序不是用来给你玩的！\n");
     }
        break;
     case 1:
     {
         second = Array_of_days_and_hours[4] * 24 * 60 * 60 + Array_of_days_and_hours[5] * 60 * 60;
        if (second >= 31536000 && b == 0) //判断是否超过不闰年的秒数
        {
            printf("秒数超过或等于一年的时间\n");
        }
        if (second >= 31622400 && b == 1) //判断是否超过闰年的秒数
        {
            printf("秒数超过或等于一年的时间\n");
        }
        else
        {
            int Output_converted_time_array[5]; //second,天整数,小时,分钟数整数,剩余的秒数
            Output_converted_time_array[0] = second;
            Conversion_time(Output_converted_time_array);
            Day_integer = Output_converted_time_array[1];
            int Array_of_months_and_days[4]; //天整数,年份,月份,日
            Array_of_months_and_days[0] = Day_integer;
            Array_of_months_and_days[1] = Particular_year;
            Judge_month(Array_of_months_and_days);
            /*年份（年）1（月）1（日）0（小时）0（分钟）0（秒）*/
            int A = Particular_year;
            int B = Array_of_months_and_days[2];    //月
            int C = Array_of_months_and_days[3];    //日
            int D = Output_converted_time_array[2]; //小时
            int E = Output_converted_time_array[3]; //分钟
            int F = Output_converted_time_array[4]; //秒
            printf("%d年 ", A);
            printf("%d月 ", B);
            printf("%d日 ", C);
            printf("%d时 ", D);
            printf("%d分 ", E);
            printf("%d秒 ", F);
        }
     }
        break;
    }
    getchar();
    return 0;
}