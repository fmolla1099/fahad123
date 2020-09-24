#include "stdio.h"
#include <bitset>
#include <iostream>
using namespace std;
int main(void)
{
	char c1;
	unsigned char uc1;
	short int i1;
	int signed_int;
	unsigned short int un_short_int;
	//More variables to declare
	//Data type of char
	cout << "The minimum value of a char is" << CHAR_MIN << endl;
	cout << "The maximum value of a char is" << CHAR_MAX << endl;
	cout << "The storage size in byte(s) of a char is" << sizeof(c1) << endl;
	cout << "Input a hexadecimal number in the data type of char, for example 8a" << endl;
	scanf_s("%x", &c1);
	//bitset stores the number of bits in 8 * sizeof(c1)
	bitset<8 * sizeof(c1)> charBits(c1);
	cout << "The converted binary value is" << charBits << endl;
	printf("The converted decimal value is %i \n", c1);
	printf("--------------------------------------------------\n");
	//Data type of unsigned char
	cout << "The maximum value of an unsigned char is" << UCHAR_MAX << endl;
	cout << "The storage size in byte(s) of an unsigned char is" << sizeof(c1) << endl;
	cout << "Input a hexadecimal number in the data type of unsigned char, for example 8a" << endl;
	scanf_s("%x", &uc1);
	//bitset stores the number of bits in 8 * sizeof(uc1)
	bitset<8 * sizeof(uc1)> ucharBits(uc1);
	cout << "The converted binary value is" << ucharBits << endl;
	printf("The converted decimal value is %i\n", uc1);
	printf("--------------------------------------------------\n");
	//Data type of short Int
	cout << "The minimum value of a short int is" << SHRT_MIN << endl;
	cout << "The maximum value of a short int is" << SHRT_MAX << endl;
	cout << "The storage size in byte(s) of a short int is" << sizeof(i1) << endl;
	cout << "Input a hexadecimal number in the data type of short int, for example 8fff" << endl;
	scanf_s("%x", &i1);
	//bitset stores the number of bits in 8 * sizeof(i1)
	bitset<8 * sizeof(i1)> shortBits(i1);
	cout << "The converted binary value is" << shortBits << endl;
	printf("The converted decimal value is %i \n", i1);
    printf("---------------------------------------------------------\n");
	//Data type for int
	cout << "Min value for int is" << INT_MIN << endl;
	cout << "Max value for int is" << INT_MAX << endl;
	cout << "The storage size in byte(s) of a int is: " << sizeof(signed_int) << endl;
	cout << "Input a hex number in the data type of int, for ex. 8ff8ff" << endl;
	scanf_s("%x", &signed_int);
	//bitset stores the number of bits in 8 * sizeof(signed_int)
	bitset<8 * sizeof(signed_int)> inBits(signed_int);
	cout << "The converted binary value is" << inBits << endl;
	printf("The converted decimal value is %i \n", signed_int);
	printf("-------------------------------------------------------\n");
	//Data type for unsigned short int
	cout << "Max value for int is: " << UINT_MAX << endl;
	cout << "The storage size in byte(s) of a unsigned short int is: " << sizeof(un_short_int) << endl;
	cout << "Input a hex number in the data type of unsigned short int, for ex.8fff8fff" << endl;
	scanf_s("%x", &un_short_int);
	//bitset stores the number of bits in 8 * sizeof(un_short_int)
	bitset<8 * sizeof(un_short_int)> unShortIntBits(un_short_int);
	cout << "The converted binary value is" << unShortIntBits << endl;
	printf("The converted decimal value is %i \n", un_short_int);
	printf("------------------------------------------------------------\n");
	system("pause");
	exit(0);
	return 0;
}


