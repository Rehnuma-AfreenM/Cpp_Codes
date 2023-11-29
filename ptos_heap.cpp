#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{

    Rectangle *p;
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p = new Rectangle;
    p->length = 14;
    p->breadth = 12;
    cout << p->length << endl;
    cout << p->breadth << endl;

    return 0;
}