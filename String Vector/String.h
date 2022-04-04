#pragma once
class String
{
	char str[100] = "Hello World";
	int* arr;
	int Extent;
	int length;
public:
	String()
	{
		Extent = 0;
		length = 14;
	}

	void Print();
	void ToUpper();
	void ToLower();
	void Length();
};