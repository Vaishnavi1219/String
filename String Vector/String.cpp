#include<iostream>
#include"String.h"

void String::Print()								
{														
	std::cout << "To Upper : " << str << "\n";
	std::cout << "To Lower : " << str << "\n";
	std::cout << "Length of the String : " << length << "\n";
	std::cout << "String is clear : " << str;
}
void String::ToUpper()
{
	str[0] -= 32;
	for (int i = 1; i < 13; i++)
	{
		if (str[i] == ' ' && str[i + 1] <= 97 + 26 && str[i + 1] >= 97)
			str[i + 1] -= 32;
	}
}
void String::ToLower()
{
	str[0] += 32;
	for (int i = 1; i < 13; i++)
	{
		if (str[i] == ' ')
			str[i + 1] += 32;
	}
}
int String::Length()
{
	return length;
}
void String::Clear()
{
	for (int i = 0; i < length; i++)
	{
		if (str[i] == str[i])
			str[i] = ' ';
	}

}