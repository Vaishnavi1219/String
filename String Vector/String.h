#pragma once
class String
{
	char* str;
	int length;

public:
	String()
	{
		length = 14;
		str = new char[length];
	}
	String(char* arr)
	{
		int lenght = 0;
		while (arr[length++] != '\0')
		{
			 
		}
		str = new char[length];
		for (int i = 0; i <= length; i++)
		{
			str[i] = arr[i];
		}
	}
	String(char* Newarr)
	{
		int newlength = length;
		while (Newarr[newlength++] != '\0')
		{

		}
		str = new char[newlength];
		for (int i = 0; i <= newlength; i++)
		{
			Newarr[i] = str[i];
		}
	}
	void Print();
	void ToUpper();
	void ToLower();
	int Length();
	void Clear();
};

