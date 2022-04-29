/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
struct
template
###End banned keyword*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
//###INSERT CODE HERE -
long long FindFirst(long long a[], long long n, long long x)
{
    long long l = 0, r = n - 1;
    while (l <= r)
    {
        long long m = l + (r - l) / 2;
        if (a[m] >= x)
            r = m - 1;
        else
            l = m + 1;
    }
    return l;
}
long long FindLast(long long a[], long long n, long long x)
{
    long long l = 0, r = n - 1;
    while (l <= r)
    {
        long long m = l + (r - l) / 2;
        if (a[m] > x)
            r = m - 1;
        else
            l = m + 1;
    }
    return l;
}
int main()
{
    long long n, t;
    cin >> n >> t;
    long long *a = new long long[n];

    for (long long i = 0; i < n; i++)
        cin >> a[i];
    while (t--)
    {
        long long x;
        cin >> x;
        int PosFirst = FindFirst(a, n, x), PosLast = FindLast(a, n, x);
        if (PosLast - PosFirst == 0)
            cout << -1 << endl;
        else
        {
            cout << (PosLast - PosFirst) << " " << PosFirst + 1 << " " << PosLast << endl;
        }
    }
}