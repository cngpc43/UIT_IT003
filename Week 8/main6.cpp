#include <iostream>
using namespace std;

int main()
{
    int n,min=10000, dem=0;;
    int a[10000];
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        if (a[i]<min)
            min= a[i];
    }
    for (int i=0; i<n; i++)
        if (a[i]==min)
            dem++;
    cout << min << " " << dem;
    return 0;
}