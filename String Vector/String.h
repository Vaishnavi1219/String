#pragma once
class String
{
	char str[100] = "Hello World";
	int* arr;
	int length;
public:
	String()
	{
		length = 14;
	}

	void Print();
	void ToUpper();
	void ToLower();
};