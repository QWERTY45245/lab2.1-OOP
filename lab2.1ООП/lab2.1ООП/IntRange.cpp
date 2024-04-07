#include "IntRange.h"
#include <string>
using namespace std;
IntRange::IntRange() : first(0), second(0), c(0) {}

IntRange::IntRange(int x, int y, int c) : first(x), second(y), c(c) {}

IntRange::IntRange(const IntRange& other) : first(other.first), second(other.second), c(other.c) {}

IntRange& IntRange::operator=(const IntRange& other)
{
    if (this != &other) {
        first = other.first;
        second = other.second;
        c = other.c;
    }
    return *this;
}

bool IntRange::Init(int x, int y, int c)
{
    if (x < y && x <= c && c < y)
    {
        first = x;
        second = y;
        this->c = c;
        return true;
    }
    else
    {
        return false;
    }
}

bool IntRange::rangeCheck() const
{
    return (c >= first && c < second);
}

std::istream& operator>>(std::istream& input, IntRange& range)
{
    do
    {
        cout << "Input range limits :" << endl;
        cout << " left limit = ";
        input >> range.first;
        cout << " right limit = ";
        input >> range.second;
        cout << " number  = ";
        input >> range.c;
    } while (!range.Init(range.first, range.second, range.c));

    return input;
}

std::ostream& operator<<(std::ostream& output, const IntRange& range)
{
    output << "Left limit: " << range.first << "\n Right limit: " << range.second << "\n Number: " << range.c;
    return output;
}

IntRange::operator std::string() const
{
    return "Left limit: " + to_string(first) + "\n Right limit: " + to_string(second) + "\n Number: " + to_string(c);
}

IntRange& IntRange::operator++()
{
    ++first;
    return *this;
}

IntRange IntRange::operator++(int)
{
    IntRange temp(*this);
    ++(*this);
    return temp;
}

IntRange& IntRange::operator--()
{
    --second;
    return *this;
}

IntRange IntRange::operator--(int)
{
    IntRange temp(*this);
    --(*this);
    return temp;
}
