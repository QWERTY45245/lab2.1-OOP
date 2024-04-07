#pragma once
#include <iostream>

class IntRange
{
private:
    int first, second, c;

public:
    // Constructors
    IntRange(); // Default constructor
    IntRange(int x, int y, int c); // Parameterized constructor
    IntRange(const IntRange& other); // Copy constructor
    IntRange& operator=(const IntRange& other); // Assignment operator

    // Getter methods
    int GetFirst() const { return first; }
    int GetSecond() const { return second; }
    int GetC() const { return c; }

    // Setter methods
    void SetFirst(int value) { first = value; }
    void SetSecond(int value) { second = value; }
    void SetC(int value) { c = value; }

    // Initialization method as constructors
    bool Init(int, int, int);
    bool rangeCheck() const;

    // Friend functions for input/output
    friend std::istream& operator>>(std::istream& input, IntRange& range);
    friend std::ostream& operator<<(std::ostream& output, const IntRange& range);

    // Conversion to string
    operator std::string() const;

    // Increment and decrement operators
    IntRange& operator++(); // Prefix increment
    IntRange operator++(int); // Postfix increment
    IntRange& operator--(); // Prefix decrement
    IntRange operator--(int); // Postfix decrement
};