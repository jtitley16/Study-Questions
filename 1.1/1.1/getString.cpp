/* This function is of type string
/* it is not passed any arguements
/* it returns a null terminated string
/* its main purpose is to prompt the user for a string as input and return it to the caller
*/

#include <iostream>
#include <string>
#include <sstream>
#include "getString.h"
#include "UniqueCharTest.h"

using namespace std;

string getString::get()		
{	
	cout << "\nPlease enter your string\n";
	cin >> s;
	return s;
}