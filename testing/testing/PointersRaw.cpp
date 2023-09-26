void Log(const char* message);
void Log(const int message);

void Pointer()
{
	//pointers are the addresses/location of memory, and this location stores a value
	//memory can be thought of a linear line of house where each house has a number address
	//pointer address is identified with the *
	void* ptr0;
	void* ptr = nullptr; //nothing being stored in null so has no address
	//the address of the ptr variable is 0 which is not valid or null
	//pointers can be allocated with no type using void

	int var0 = 8;
	int* ptr1 = &var0;
	// the & symbol will share the memory address of the variable 
	//if youset a break point on this line and hover over ptr where we are storing vars memory address
	//we can the ook up this value to see the location in Debig>Windows>Memory
	double* ptr2 = (double*) & var0;
	//The address in its raw form is an int, but the can be cast to any other value (unusual)

	int var1 = 10;
	int* ptr3 = &var1;
	//here we have set the address to the address of var 1, using type followed by *
	Log(var1); // var1 = 10
	*ptr3 = 123; //setting that memory address loaction to the value 100
	// * before the pointer name will access the data stored in that location
	//and after we have taken that location and set the stored value in the loacation to 100
	Log(var1); // var1 = 123
}