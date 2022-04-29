#include <iostream>
using namespace std;

int main()
{
    int kq=0,a,b,n,i=0;
    cin >> a >> b>> n;
    while (i<n)
    {
        i++;
        kq=kq+a*b;
        a++; b++;
    }
    cout << kq;
    return 0;
}