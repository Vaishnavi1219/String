#include<iostream>
#include"String.h"

void String::Print()
{
	std::cout << str;
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