#include <iostream>
using namespace std;

union MyUnion
{
    int intValue; // 4 Byte
    float floatValue; // 4 Byte
    char charValue[21]; // 20 Byte

    // 20 Byte will be allocated, 
    // because char it's the largest.
};

int main()
{
    MyUnion x;
    x.floatValue = 13.4f;
    cout << "floatValue : " << x.floatValue << endl;

    x.intValue = 101;
    cout << "intValue : " << x.intValue << endl;

    cout << "floatValue : " << x.floatValue << endl;
}

