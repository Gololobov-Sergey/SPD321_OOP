#pragma once
#include <iostream>

using namespace std;

class Array
{
	int* arr;
	size_t size;

public:
	Array();
	explicit Array(size_t size);
	Array(const Array& obj);
	~Array();
	void setRandom(int min = 0, int max = 9) const;
	void print() const;
	void push(int value);
	void pop();
	void insert(int value, int index);
	void remove(int index);

};

Array::Array() : arr(nullptr), size(0){ cout << "Constructor 0" << endl; }

Array::Array(size_t size)
{
	cout << "Constructor 1" << endl;
	this->size = size;
	arr = new int[size];
}

Array::Array(const Array& obj)
{
	cout << "Constructor copy" << endl;
	size = obj.size;
	arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = obj.arr[i];
	}
}

Array::~Array()
{
	cout << "Destructor" << endl;
	delete[] arr;
}

void Array::setRandom(int min, int max) const
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}

void Array::print() const
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
