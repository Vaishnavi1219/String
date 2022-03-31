#include<iostream>
#include"String.h"
using namespace std;
typedef  int number;

class cars
{
public:
	static int count;
	int y;
	cars() {
		count++;
	}
};
int cars::count = 0;

int main()
{
	cars* arr[100];
	for (size_t i = 0; i < 100; i++)
	{
		arr[i] = new cars;
	}

	/*String str;
	str.ToUpper();
	str.Print();*/
	getchar();
}









/*

str.ToUpper();		// hello => Hello || helloworld => HelloWorld
str.ToLower();		// HeLlO => hello
str.Clear();		// Hello => ""
str.Insert();		// Hello .Insert("World") => HelloWorld
str.SubString();	// Hello .SubString(2,4) => llo
str.Length();	    // Hello => 5
str.Reserve();		// New array of size x
*/
