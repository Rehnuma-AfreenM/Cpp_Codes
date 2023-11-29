#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int A[10] = {2, 5, 7, 8, 4, 67, 44};
    cout << sizeof(A) << endl;
    cout << A[8] << endl;
    printf("%d\n", A[9]);
    for (int x : A)
    {
        cout << x << endl;
    }

    return 0;
}