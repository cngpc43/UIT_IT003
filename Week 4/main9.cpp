#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    signed int a,b;
    cin >> a >> b;
    if (b-a<0)
        cout << "TRUE";
    else
        if ((b-a)%2==0)
            cout << "FALSE";
        else cout << "TRUE";
    return 0;
}