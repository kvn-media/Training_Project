#include <iostream>
using namespace std;

int main()
{
	// Arithmetic Operator
	int x = 3 + 2, // 5 // addition
		x = 3 - 2, // 1 // substraction
		x = 3 * 2, // 6 // multiplication
		x = 3 / 2, // 1 // division
		x = 3 % 2; // modulus (division remainder)

	float f = 3 / (float)2; // 1.5

	// Assignment Operator
	int x = 0; // assignment

	/*
	x += 5, // x = x+5;
	x -= 5, // x = x-5;
	x *= 5, // x = x*5;
	x /= 5, // x = x/5;
	x %= 5; // x = x%5;
	*/

	// Increment and Decrement Operators
	/* x++; // post-increment
	   x--; // post-decrement
	   ++x; // pre-increment
	   --x; // pre-decrement
	*/
	int x, y;
	int x = 5, y = x++; // y = 5, x = 6
	int x = 5, y = ++x; // y = 6, x = 6

	// Comparison Operators
	bool b = (2 == 3), // false // equal to
		 b = (2 != 3), // true // not equal to
		 b = (2 > 3), // false // greater than
		 b = (2 < 3), // true // less than
		 b = (2 >= 3), // false // greater than or equal to
		 b = (2 <= 3); // true // less than or equal to

	// Logical Operator
	bool b = (true && false); // false // logical and
	bool b = (true || false); // true // logical or
	bool b = !(true); // false // logical not

	// Bitwise Operator
	int x = 5 & 4; // 101 & 100 = 100 (4) // and
	int x = 5 | 4; // 101 | 100 = 101 (5) // or
	int x = 5 ^ 4; // 101 ^ 100 = 001 (1) // xor
	int x = 4 << 1; // 100 << 1 = 1000 (8) // left shift
	int x = 4 >> 1; // 100 >> 1 = 10 (2) // right shift
	int x = ~4; // ~00000100 = 11111011 (-5) // invert

	// bitwise combine assignment operator
	/*
	int x = 5; x &= 4; // 101 & 100 = 100 (4) // and
	int x = 5; x |= 4; // 101 | 100 = 100 (5) // or
	int x = 5; x ^= 4; // 101 ^ 100 = 100 (1) // xor
	int x = 5; x <<= 4; // 101 << 1 = 1010 (10) // left shift
	int x = 5; x >>= 4; // 101 >> 1 = 10 (2) // right shift
	*/

	// Operator Precedence
	bool b = 2 + 3 > 1 * 4 && 5 / 5 == 1; // true
	bool b = ((2 + 3) > (1 * 4)) && ((5 / 5) == 1); // true
}