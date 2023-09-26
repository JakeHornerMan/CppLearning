#include "master.h"

void PassValue(int value) {
	//because no referemce was passed to this funtion it is essentially doing:
	//int value = 5;
	value++;
}

void PassRef(int& value) {
	value++;
}

void PassPtr(int* value) {
	//* to access the ptrs value
	(*value)++;
}

void References() 
{
	int noRefvar = 5;
	int refvar = 5;
	int ptrvar = 5;
	//& symbol with the variable type declares a reference
	int& ref1 = refvar;
	// a ref isnt really a variable if you compile and debug you will see only a variable
	Log("all value = 5");
	Log("Here was passed the value by value");
	PassValue(noRefvar);
	Log(noRefvar);
	
	Log("Here was passed the value by reference");
	PassRef(refvar);
	Log(refvar);

	Log("Here was passed the value by address into a pointer accepted method");
	PassPtr(&ptrvar);
	Log(ptrvar);

	int a = 6;
	int b = 8;
	//this does not rewrite ref2 to the address of b
	//wthis will now write a = 8
	int& ref2 = a;
	ref2 = b;
	Log(a);
	Log(b);

	int x = 6;
	int y = 8;
	//this we will use a pointer to change address stored
	int* ptr = &x;
	Log(ptr);
	//this will now write address of y
	ptr = &y;
	Log(ptr);
}

