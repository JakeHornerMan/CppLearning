#include <iostream>

int m_ExternalLinkedInt = 5;

//only visiable in this class
static int m_StaticInt = 10;

struct Entity
{
	static int x, y;
	int a, b;

	static void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}

	//this will throw an error as a and b are non static called in a static function
	/*static void NonStaticPrint()
	{
		std::cout << a << ", " << b << std::endl;
	}*/
	//this is non static method so it can access non static vars and works
	void NonStaticPrint()
	{
		std::cout << a << ", " << b << std::endl;
	}
	//if we pass in the Entity, we can access these non static vars in a static method 
	static void StaticPrint(Entity e)
	{
		std::cout << e.a << ", " << e.b << std::endl;
	}
};

int Entity::x;
int Entity::y;


void Static()
{
	Entity e;
	e.x = 1;
	e.y = 2;
	e.a = 11;
	e.b = 12;

	Entity e1;
	e1.x = 3;
	e1.y = 4;
	e1.a = 21;
	e1.b = 22;

	//they print the same variable because they are static
	e.Print();
	e1.Print();

	//these are nom static variable so the values differ
	e.NonStaticPrint();
	e1.NonStaticPrint();

	//better to access them like this
	Entity::x = 5;
	Entity::y = 5;

	//they print the same variable because they are static
	Entity::Print();

	//this is a static method accessing nonstatic vars through reference of object class
	Entity::StaticPrint(e);
	Entity::StaticPrint(e1);
}