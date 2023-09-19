// Project >> Properties >> C/C++ >> Preprocessing >> Preprocess to a file = yes
//Look at Preprocessing.i in file explorer
#include <iostream>;

//allows us to redefine words
#define INTEGER int

// allows us to add conditionals to compiled code (1 == always compliles, 0 == doesnt compile)
#if 1
int Multiply(int a, int b)
{
	INTEGER result = a * b;
	return result;

//allows us to insert from header
#include "EndBrace.h"
#endif
