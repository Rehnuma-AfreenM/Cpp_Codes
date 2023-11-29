#include <iostream>
using namespace std;
int add(int a, int b)
{ // formal parameter
    int c;
    c = a + b;
    return c;
}
int main()
{
    int num1 = 23, num2 = 45, num3;
    int sum = add(num1, num2); // function call
    cout << "sum is " << sum;
    return 0;
}