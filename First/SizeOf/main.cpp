#include <iostream>
#include <climits>

using namespace std;

int main()
{
	cout << "size of info" << endl;
	cout << "============================================" << endl;
	
	cout << "char: " << sizeof(char) << " bytes" << endl;
	cout << "int: " << sizeof(int) << " bytes" << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
	cout << "short: " << sizeof(short) << " bytes" << endl;
	cout << "long: " << sizeof(long) << " bytes" << endl;
	cout << "long long: " << sizeof(long long) << " bytes" << endl;
	cout << "float: " << sizeof(float) << " bytes" << endl;
	cout << "double: " << sizeof(double) << " bytes" << endl;
	cout << "long double: " << sizeof(long double) << " bytes" << endl;
	cout << "============================================" << endl;
	
	cout << "maximum values" << endl;
	cout << "char: " << CHAR_MAX << " bytes" << endl;
	cout << "int: " << INT_MAX << " bytes" << endl;
	cout << "short: " << SHRT_MAX << " bytes" << endl;
	cout << "long: " << LONG_MAX << " bytes" << endl;
	cout << "long long: " << LLONG_MAX << " bytes" << endl;
	cout << "============================================" << endl;
	
	cout << "minimum values" << endl;
	cout << "char: " << CHAR_MIN << " bytes" << endl;
	cout << "int: " << INT_MIN << " bytes" << endl;
	cout << "short: " << SHRT_MIN << " bytes" << endl;
	cout << "long: " << LONG_MIN << " bytes" << endl;
	cout << "long long: " << LLONG_MIN << " bytes" << endl;
	cout << "============================================" << endl;
	
	int age;
	cout << "example of values not changing size if they store a value" << endl;
	cout << "int var age: " << sizeof(age) << " bytes" << endl;
	cout << "Enter age: ";
	cin >> age;
	cout << "int var age after assigned value: " << sizeof(age) << " bytes" << endl;
	
}
