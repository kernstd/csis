#pragma once

class counterType
{
    public:
    void initializeCounter();
    // Function to initialize counter to 0
    void setCounter(int x = 0);
    // Function to set counter to the value specified by x.
    // If x < 0, then counter = 0;
    void incrementCounter();
    // Function to increment counter by 1
    void decrementCounter();
    // Function to decrement counter by 1.
    // If counter was <= 0, then counter is set to 0.
    int getCounter() const;
    // Function to return the value of the private data member count
    void print() const;
    // Function to print the value of counter
    counterType(int x = 0);
    // Constructor with default parameters
    private:
    int counter;
};
