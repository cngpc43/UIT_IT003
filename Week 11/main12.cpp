#include <iostream>
using namespace std;

void input(int a[], int &n)
{
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
}
int max(int a[], int n)
{
    int maxx=0;
    for (int i=0; i<n; i++)
        if (a[i]>maxx)
            maxx=a[i];
    return maxx;
}
int main()
{
    int n, a[1000],max0=0,max1=0;
    input(a,n);
    max0 = max(a,n);
    for (int i=0; i<n; i++)
        if (a[i]>max1 && a[i]<max0)
            max1 =  a[i];
    cout << max1;
    return 0;
}