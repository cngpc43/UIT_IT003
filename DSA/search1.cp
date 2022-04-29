/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
template
###End banned keyword*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

//###INSERT CODE HERE -
long long binarySearch(long long A[], int n, int x)
{
    long long mid, l = 0, r = n - 1, res = n;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (A[mid] >= x)
        {
            res = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return n - res;
}

int main()
{
    long long n, t;
    cin >> n >> t;
    long long *a = new long long[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < t; i++)
    {
        long long k;
        cin >> k;
        cout << binarySearch(a, n, k) << endl;
    }
}