#pragma once
class String
{
	char str[100] = "hello World";
	int i;
	int* arr;
	int length;
public:
	String()
	{
		length = 14;
	}
	void Print();
	void ToUpper();
};