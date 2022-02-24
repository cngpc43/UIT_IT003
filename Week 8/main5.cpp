#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    int n, a[100];


    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    int k,i;
    cin >> k;
    for ( i=0; i<n; i++)
        if (a[i]==k)
        {
            cout << k << " xuat hien dau tien tai vi tri thu " << i+1 << " trong mang";
            break;
        }
    if (i==n)
        cout << "Khong tim thay " <<k;


    return 0;
}