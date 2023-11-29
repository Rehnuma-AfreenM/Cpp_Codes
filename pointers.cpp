#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a = 10;
    int *p; // declaration of pointer.
    p = &a; // storing the address of ain p.
    cout << a << endl;
    printf("using pointer %d", *p);
    printf("using pointer %d %d", p, &a); // printing address of a.
    return 0;
}