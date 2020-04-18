#include <iostream>

using namespace std;

enum Sample{ONE,TWO,THREE,FOUR};

enum myValue{
    myValue1 = 2,
    myValue2 = 4,
    myValue3 = 8,
    myValue4 = 10,
};


int main(void)
{
    enum Sample a, b, c, d;
    a = ONE, b = TWO, c = THREE, d = FOUR;

    //operations
    cout << (a + myValue1) << endl;    // result should be 2.
    cout << (FOUR - b) << endl;   // result should be 2.
    cout << (myValue3 * c) << endl;  // result should be 16.
    cout << (myValue3 / b) << endl;  // result should be 8.

    cout << (b | myValue1) << endl;    // result should be 3.
    cout << (myValue1 & myValue2) << endl; // result should be 0.
    cout << (THREE ^ myValue3) << endl;  // result should be 10.
    cout << (myValue3 << TWO) << endl;  // result should be 16.
    cout << (myValue1 >> d) << endl;  // result should be 0.

    int x  = 5 + (int)myValue3 + (int) TWO ; // this legal.
    cout << x << endl;  //result should be 14.

    int y = THREE;    // this legal.
    cout <<(y + b)<< endl; // result should be 3.

    // a = 2;    // this illegal because a has cast to Sample.
    // cout <<(a + b)<< endl; //this is illegal since 'a' is not legal


    return 0;
}






