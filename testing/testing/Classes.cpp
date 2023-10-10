#include <iostream>;

#include "master.h"

//structs are default public
struct Object {
	const char* name;
	int weight;

	void setObject(const char* _name, int _weight) {
		name = _name;
		weight = _weight;
	}
};

//vlasses are private on default
class Player
{
	public: 
		int x = 0, y = 0;
		int speed = 3;
		int inventoryWeight = 10;
		int weightFilled = 0;

		void Move( int ya, int xa)
		{
			x += xa * speed;
			y += ya * speed;
			Log("Player x position is");
			Log(x);
			Log("Player y position is");
			Log(y);
		}

		void ViewInventory() {
			Log("Weight Filled:");
			Log(weightFilled);
		}

		void PlaceInInventory(Object& obj) {
			if (weightFilled < inventoryWeight) 
			{
				weightFilled += obj.weight;
				Log("Added:");
				Log(obj.name);
			}
			else {
				Log("Inventory full");
			}
		}

		void RemoveFromInventory(Object& obj) {
			if (weightFilled != 0)
			{
				weightFilled -= obj.weight;
				Log("Removed:");
				Log(obj.name);
			}
			else {
				Log("You dont have that item in your bag");
			}
		}
};

void Class()
{
	Player player;
	player.Move(1,1);
	player.ViewInventory();

	Object banana;
	banana.setObject("Banana", 1);

	std::cin.get();
	for (int a = 0; a <= 10; a++) 
	{
		player.PlaceInInventory(banana);
	}

	std::cin.get();
	for (int b = 0; b <= 10; b++)
	{
		player.RemoveFromInventory(banana);
	}

	std::cin.get();
	player.ViewInventory();

}