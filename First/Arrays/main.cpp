#include <iostream>

using namespace std;

int main()
{
	int number_array [5] {1,2}; //rest of 8 entrys are default 0
	
	cout << "0 index in number_array: " << number_array[0] << endl;
	cout << "1 index in number_array: " << number_array[1] << endl;
	cout << "2 index in number_array: " << number_array[2] << endl;
	cout << "3 index in number_array: " << number_array[3] << endl;
	cout << "4 index in number_array: " << number_array[4] << endl;
	
	cout << "Memory address of array: " << number_array << endl;
	
	cout << "\nEnter 5 numbers: ";
	cin >> number_array[0];
	cin >> number_array[1];
	cin >> number_array[2];
	cin >> number_array[3];
	cin >> number_array[4];
	
	cout << "0 index in number_array: " << number_array[0] << endl;
	cout << "1 index in number_array: " << number_array[1] << endl;
	cout << "2 index in number_array: " << number_array[2] << endl;
	cout << "3 index in number_array: " << number_array[3] << endl;
	cout << "4 index in number_array: " << number_array[4] << endl;
}
