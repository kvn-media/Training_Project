#include <iostream>
using namespace std;

int globalVar; // initialized to 0
int main() 
{
	int localVar = 0; // initialized to 0
	// int localVar; // uninitialized
	
	cout << "Hello World";
	cin.get();


	// Single-line comment
	/* multi-line
	comment */

	/*
	int myInt; // Correct
	int 32Int; // incorrect (Start with number)
	int Int 32; // incorrect (contains space)
	int Int@32; // incorrect (contains special character)
	int new; // incorrect (reserved keyword)
	*/

	// Assigning Variabel
	int myInt = 50;
	int myAlt(50);
	int x = 1, y = 2, z;
	cout << x << y << endl; // "12"

	// Variabel Scope
	 /* int globalvar; // global variabel
	int main() { int localVar; } // local variabel
	*/

	// Integer Type
	char myChar = 0; // -128 to +127
	short myShort = 0; // -32768 to +32767
	int myInt = 0; // -2^31 to  + 2^31-1
	long myLong = 0; // -2^31 + 2^31-1
	long long myL2 = 0; // -2^63 to +2^63-1
	cout << sizeof(myChar) // 1 byte (per definition)
		<< sizeof(myShort) // 2
		<< sizeof(myInt) // 4
		<< sizeof(myLong) // 4
		<< sizeof(myL2); // 8
}