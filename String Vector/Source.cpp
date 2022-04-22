#include<iostream>
#include"String.h"
using namespace std;

int main()
{
	String str = "Hello";
	//str.ToUpper();
	//str.ToLower();
	//str.Length();
	str.Clear();
	str.Print();
	getchar();
}









/*
str.Insert();		// Hello .Insert("World") => HelloWorld
str.SubString();	// Hello .SubString(2,4) => llo
str.Reserve();		// New array of size x
*/
