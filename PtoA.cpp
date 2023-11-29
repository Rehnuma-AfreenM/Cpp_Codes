#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int *p;
    // p=&A[0];
    p = A;
    // p=&A; this will be wrong
    for (int i = 0; i < 5; i++)
    {
        // cout << A[i] << endl;
        cout << p[i] << endl;
    }

    return 0;
}