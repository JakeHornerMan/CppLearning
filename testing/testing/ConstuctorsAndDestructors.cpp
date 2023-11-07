#include <iostream>
#include "master.h"

class Entity 
{
public:
	float A, B;

	//default constructor
	Entity() {
		
		A = 0.00f;
		B = 0.00f;
		Log("Constructed Entity");
	}

	//value constructor
	Entity(float a, float b) {
		A = a;
		B = b;
		Log("Constructed Entity");
	}

	//Destructor method that Destroys objects when out of scope
	~Entity() {
		Log("Destructed Entity");
	}

	void Print() {
		std::cout << A << ", " << B << std::endl;
	}
};

void Constructors() {
	Entity e;
	e.Print();
	//values are not set so are 0.00

	Entity e1(1.11f, 2.22f);
	e1.Print();
}

void Destructors() {
	Constructors();
	//Entitys get Destructed when they are out of scope, after the end of the user function.
}