#pragma once
#include <iostream>

using namespace std;

class Student
{
	const int id;
	char* name;
	int age = 0;

	static int count;

public:
	Student(int id) : Student("No name", 0, id)
	{
		cout << "Constructor Student 1" << endl;
	}

	Student(const char* n, int a, int id) : id(id)
	{
		count++;
		setName(n);
		setAge(a);
		cout << "Constructor Student 3" << endl;
	}

	~Student()
	{
		count--;
		cout << "Destructor Student" << endl;
		delete name;
	}

	static int getCount()
	{
		return count;
	}

	void setAge(int a);
	void setName(const char* n);
	char* getName() const;
	void print() const;
};

int Student::count = 0;


void Student::setAge(int a)
{
	if (a < 0 || a > 110)
		return;
	age = a;
}

void Student::setName(const char* n)
{
	delete name;
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

char* Student::getName() const
{
	return name;
}

void Student::print() const
{
	cout << "Name : " << name << endl;
	cout << "Age  : " << age << endl;
}