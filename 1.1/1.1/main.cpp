//Question 1.1
//Implement an algorithm to determine if a string has all unique characters.  
//What if you cannot use additional data structures?
#include <iostream>
#include <string>
#include <sstream>
#include "getString.h"
#include "UniqueCharTest.h"

using namespace std;

void main()
{
	string mystr;				//declare a new string
	getString newString;		//declare a new class of type getString
	UniqueCharTest newTest;		//declare a new class of type UniqueCharTest

	mystr = newString.get();	//This will prompt the user for a string and assign it to mystr
	newTest.testString(mystr);	//This will send mystr to be tested, we want to know whether or not this string is unique
}