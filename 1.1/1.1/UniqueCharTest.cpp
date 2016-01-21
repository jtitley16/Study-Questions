#include <iostream>
#include <string>
#include <sstream>
#include "getString.h"
#include "UniqueCharTest.h"

using namespace std;

void UniqueCharTest::testString(string S)
{
	string val;		//string that holds either "unique" or "not unique"
	char c;			//character for storing string elements
	int i;			//string index value
	int ic;			//index location into the array
	int max = S.length();	//max will hold the length of the array, remember in C, strings are null terminated
	val = "unique";			//we assume initially that the string is unique, any change in this statis will short circuit our test, and set the value to not unique

	if(S.length() > 26)		//any string over 26 must contain duplicates, in addition spaces are also duplicate so more than one word must also be excluded from this excersie
		val = "not unique";
		
		int myArray[25] = {0};	//declare an array of 0's of size 26, there are 26 letters in the alphabet assuming we ignore case sensitivity
			
	for(i=0; i<max; i++)		//this loop will iterate once thru each character of the string, excluding the null terminator
	{
		c = S[i];				//c is assigned the character value at the index [i] of our string
		c = toupper(c);			//c is made upper case, confining it to a dec value of 65-90
		ic = (int)c - 65;		//ic i sassigned the dec value of c, we subtract 65 for normalization, our range is now 0-25
		
		if(myArray[ic] == 1)	//if our indexed location is not 0, then we have seen a duplicate, we break and declare this string as not unique
		{
			val = "not unique";	
			break;
		}
		else					//if our indexed location has not been seen, we set it to 1 indicating we have seen it
			myArray[ic] = 1;
	}
	
	cout << "The string " + S + " is " + val;	//We will now echo the string, and declare it as unique or not unique
	cout << "\n";
}