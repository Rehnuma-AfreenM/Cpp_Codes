#include <bits/stdc++.h>
using namespace std;
int maxProduct(vector <int> &a)
{
    int firstMax = 0 , secondMax = 0 , n = a.size();
    for(int i = 0 ; i < n ; i++)
        if(a[i] > firstMax)
        {
            secondMax = firstMax;
            firstMax = a[i];
        }
        else if(a[i] > secondMax)
            secondMax = a[i];
    return (firstMax - 1) * (secondMax - 1);
}
int main()
{
    vector <int> a = {1 , 4 , 5 , 3 , 6 , 4};
    cout << maxProduct(a) << '\n';
}
