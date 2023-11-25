#pragma once


class Area
{
	static int count;

public:
	static double Square(double a)
	{
		count++;
		return a * a;
	}

	static double Rectangle(double a, double b)
	{
		count++;
		return a * b;
	}

	static int getCount()
	{
		return count;
	}
};

int Area::count = 0;

