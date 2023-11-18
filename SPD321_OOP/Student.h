#pragma once
#include <iostream>

using namespace std;

class Student
{
	char name[20];
	int age = 0;

public:
	void setAge(int a);
	void setName(const char* n);
	char* getName();
	void print();
};

void Student::setAge(int a)
{
	if (a < 0 || a > 110)
		return;
	age = a;
}

void Student::setName(const char* n)
{
	strcpy_s(name, 20, n);
}

char* Student::getName()
{
	return name;
}

void Student::print()
{
	cout << "Name : " << name << endl;
	cout << "Age  : " << age << endl;
}