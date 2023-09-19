#include <iostream>
#include "Logs.h"

void ForLoop(const char* message, int amount)
{
    for (int i = 0; i < amount; i++) {
        Log(i +1);
        Log(message);
    }
    //first checks the condition
}

void WhileLoop(const char* message, int amount)
{
    bool condition = true;
    int i = 0;
    while (condition) {
        Log(i + 1);
        Log(message);
        i++;
        if (i >= amount) {
            condition = false;
            Log("We have hit the amount");
        }
    }
    //checks the condition before
}

void DoWhileLoop(const char* message, int amount) 
{
    bool condition = true;
    int i = 0;
    do{
        Log(i + 1);
        Log(message);
        i++;
        if (i >= amount) {
            condition = false;
            Log("We have hit the amount");
        }
    } while (condition);
    //checks the condition after
}