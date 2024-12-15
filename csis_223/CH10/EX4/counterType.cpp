#include <iostream>
#include "counterType.h"

using namespace std;

void counterType::initializeCounter()
{
    counter = 0;
}
void counterType::setCounter(int x)
{
    if (x >= 0)
        counter = x;
    else counter = 0;
}
void counterType::incrementCounter()
{
    counter++;
}
void counterType::decrementCounter()
{
    if (counter <= 0)
        cout << "Counter cannot be negative." << endl;
    else
        counter--;
}
int counterType::getCounter() const
{
    return counter;
}
void counterType::print() const
{
    cout << "Counter = " << counter << endl;
}
counterType::counterType(int x)
{
    setCounter(x);
}