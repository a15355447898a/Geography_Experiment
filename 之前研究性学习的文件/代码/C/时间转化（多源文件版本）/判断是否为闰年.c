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
	return X;
}