#include<iostream>
#include"String.h"

void String::Print()
{
	std::cout << "To Upper : " << str;
	std::cout << "To Lower : " << str;
	std::cout << "Length of the String : " << Extent;
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
void String::Length()
{
	for (int i = 0; str[i] != '\0'; ++i)
		Extent++;
}


