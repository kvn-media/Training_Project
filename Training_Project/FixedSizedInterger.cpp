#include <cstdint>
#include <iostream>
using namespace std;

int main()
{
	int8_t myInt8 = 0; // 8 bits
	int16_t myInt16 = 0; // 16 bits
	int32_t myInt32 = 0; // 32 bits
	int64_t myInt64 = 0; // 64 bits

	// Signed and Unsigned Integers
	signed char myChar = 0; // -128 to +127
	signed short myShort = 0; // -32768 to +32767
	signed int myInt = 0; // -2^31 to +2^31-1
	signed long myLong = 0; // -2^31 to +2^31-1
	signed long long myL2 = 0;

	unsigned char myChar = 0; // 0 to 255
	unsigned short myShort = 0; // 0 to 65535
	unsigned int myInt = 0; // 0 to 2^32-1
	unsigned long myLong = 0; // 0 to 2^32-1
	unsigned long long myL2 = 0; // 0 to 2^64-1

	unsigned uInt; // unsigned int
	signed sInt; // signed int

	short myShort; // short int
	long myLong; // long int

	// Numeric Literals
	int myOct = 062; // octal notation (0)
	int myHex = 0x32; // hexadecimal notation (0x)
	int myBin = 0b0011'0010; // binary notation (0b)

	// Floating-Point Types
	float myFloat; // ~7 digits
	double myDouble; // ~15 digits
	long double myLD; // typically sama as double
	/*
	myFloat = 12345.678; // rounded to 12345.68
	myFloat = 3e2; // 3*10^2 = 300
	myFloat = 0xFp2; // 15*2^2 = 60
	*/

	// Literal Suffixes
	int i = 10;
	long l = 10L;
	unsigned long ul = 10UL;
	float f = 1.23F;
	double d = 1.23;
	long double ld = 1.23L;

	// Char Type
	char c = 'x'; // assigns 120 (ASCII for 'x')
	cout << c; // print 'x'

	int i = c; // assigns 120
	cout << i; // prints 120
	cout << (char)i; // prints 'x'

	char ascii = u8'x'; // use UTF-8 Encoding

	// Bool Type
	bool b = false; // true or false value
}