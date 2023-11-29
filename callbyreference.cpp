#include <iostream>
using namespace std;
void swap(int &x, int &y) // call by address
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int num1 = 12, num2 = 13;
    swap(num1, num2);
    cout << "first number = " << num1 << endl;
    cout << "second number = " << num2 << endl;

    return 0;
}