#include <iostream>

using namespace std;

int numOfRooms {0};
const int price {30};

int main()
{
	cout << "Welcome to room cleaning service!" << endl;
	cout << "\n How many rooms do you need cleaning?";
	cin >> numOfRooms;
	cout << "\n To clean " << numOfRooms << " rooms" << endl;
	cout << "The price would be $" << numOfRooms * price << endl;
	
}
