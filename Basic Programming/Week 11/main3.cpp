#include <iostream>
#include <math.h>
using namespace std;

double trungbinh(int a[], int n)
{
    double sum=0;
    for (int i=0; i<n; i++)
        sum+=a[i];
    return sum/n;
}
int main()
{
    int n; int a[10000];
    cin >> n;
    for (int i=0; i<n;i++)
        cin >> a[i];
    double tb=trungbinh(a,n), phuongsai=0;
    for (int i=0; i<n; i++)
        phuongsai+=pow(a[i]-tb,2);
    cout.precision(10);
    cout << sqrt(phuongsai/n);
    return 0;
}