#include "IntRange.h"
#include <iostream>
using namespace std;
IntRange makeIntRange(int x, int y, int c)
{
    IntRange range{};
    if (!range.Init(x, y, c))
        cout << "Wrong arguments to Init!" << endl;
    return range;
}

int main()
{
    IntRange c{};
    cin >> c;
    cout << c << endl;
    cout << "number  = " << (c.rangeCheck() ? "true" : "false") << endl << endl;

    int x, y, z;
    cout << "Input range limits :" << endl;
    cout << " left limit = "; cin >> x;
    cout << " right limit = "; cin >> y;
    cout << " number  = "; cin >> z;
    IntRange d = makeIntRange(x, y, z);
    cout << d << endl;
    cout << "number  = " << (d.rangeCheck() ? "true" : "false") << endl;

    cin.get();
    return 0;
}