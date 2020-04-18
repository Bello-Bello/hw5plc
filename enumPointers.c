#include <stdio.h>

enum Sample{ONE,TWO,THREE,FOUR};

enum myValue{
    myValue1 = 2,
    myValue2 = 4,
    myValue3 = 8,
    myValue4 = 10,
};


int main(void) {
    enum Sample a, b, c, d;
    a = ONE, b = TWO, c = THREE, d = FOUR;

    //operations
    printf("%d \n", a + myValue1);  // result should be 2.
    printf("%d \n", FOUR - b);      // result should be 2.
    printf("%d \n", myValue3 * c); // result should be 16.
    printf("%d \n", myValue3 / b);    // result should be 8.

    printf("%d \n", b | myValue1);      // result should be 3.
    printf("%d \n", myValue1 & myValue2);  // result should be 0.
    printf("%d \n", THREE ^ myValue3);    // result should be 10.
    printf("%d \n", myValue3 << TWO);     // result should be 16.
    printf("%d \n", myValue1 >> d);       // result should be 0.

    int x  = 5 + (double)myValue3 + (int)TWO;
    printf( "%d \n", x);  //result should be 14

    int y = THREE;    // this legal.
    printf("%d \n", y + b); // result should be 3.

    a = 2; // this legal in C even though a has been casted to Sample.
    printf("%d \n", a + b); // this legal, result should be 3.



    return 0;
}
