#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int n;
    cout << "enter size : ";
    cin >> n;
    int A[n]; // variable sized array can't be initalized.
    A[0] = 2;
    cout << sizeof(A) << endl;
    cout << A[0] << endl;
    // printf("%d\n", A[9]);
    // for (int x : A)
    //  {
    //     cout << x << endl;
    // }

    return 0;
}