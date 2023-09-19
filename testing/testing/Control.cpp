#include <iostream>
#include <sstream>
#include "Logs.h"

void Continue(int amount, int dividable)
{
    int times = 0;
    for (int i = 0; i < amount; i++) {
        if (i % dividable)
            continue;

        Log(i);
        Log("iteration was divisable!");
        times++;
    }
    Log("was divisable: ");  
    Log(times);
}

void Break(char myword[4], char target)
{
    bool didBreak = false;
    for (int i = 0; i < sizeof(myword); i++) {
        if (myword[i] == target) {
            Log("FOUND THE LETTER!");
            break;
        }

        Log(myword[i]);
        Log("There was no ");
        Log(target);
    }
}