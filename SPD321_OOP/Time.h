#pragma once
#include <iostream>

using namespace std;


class Time
{
	int hour;
	int minutes;
	int second;

public:
	Time() : Time(0) {}
	Time(int s) : Time(0, s) {}
	Time(int m, int s) : Time(0, m, s) {}
	Time(int h, int m, int s)
	{
		hour = h;
		minutes = m;
		second = s;
	}

	void print()
	{
		if (hour < 10)
			cout << 0;
		cout << hour << ":";
		if (minutes < 10)
			cout << 0;
		cout << minutes << ":";
		if (second < 10)
			cout << 0;
		cout << second << endl;

	}
};
