#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x; // also assign 4 bytes but use only one bytes-this is called padding
};          // r1;
// struct Rectangle r1,r2,r3; - declaration of variable available for all the function in this program.
int main()
{
    struct Rectangle r1 = {10, 5}; //- this declaration is local to the main function.
    // printf("%lu", sizeof(r1));
    r1.length = 15;
    r1.breadth = 45;
    cout << r1.length << endl;
    cout << r1.breadth << endl;
    return 0;
}