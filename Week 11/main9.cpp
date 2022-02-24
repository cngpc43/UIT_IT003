#include <iostream>
using namespace std;

int main()
{
    int n, a[10], left, right;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    cin>> left  >> right ;
    for (int i=0 ; i<n; i++)
        if (i<left || i > right)
            cout << a[i] << " ";
    return 0;
}