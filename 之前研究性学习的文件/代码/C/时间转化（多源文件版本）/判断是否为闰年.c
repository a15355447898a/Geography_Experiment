int �ж��Ƿ�Ϊ����(int year)//X==1�����꣬X==0��������
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