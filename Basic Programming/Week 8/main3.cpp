#include <iostream>
using namespace std;


int main()
{
    int n,dem=0,k;
    int a[10000];
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    cin>> k;
    for (int i=0; i<n; i++)
        if (a[i]==k)
            dem++;
    cout << dem;
    return 0;
}