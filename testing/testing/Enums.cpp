#include <iostream> 

enum Example : char {
	//A auto = 0, and D will auto = 7 (starts at 0, will increment +1 aswell)
	A , B = 2, C = 6, D
};

void Enum() 
{
	int value = 2;

	if (value == B) {
		//do something
	}
}