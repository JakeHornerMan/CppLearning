#include <iostream>

using namespace std;

double width;
double height;
double ans;

int main()
{	
	cout << "Enter width of room in meters: ";
	cin >> width;
	cout << "Enter height of room in meters: ";
	cin >> height;
	
	ans = width * height;
	cout << "Area of room is " << ans << " meter squared" << endl;
	
	return 0;
}
