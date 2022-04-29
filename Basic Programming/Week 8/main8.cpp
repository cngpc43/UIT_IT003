#include <iostream>
#include <math.h>
using namespace std;

bool ktrachan(int a[], int n)
{
    for (int i=0; i<n; i++)
        if (a[i]%2!=0)
            return false;
    return true;        
}
bool ktrale(int a[], int n)
{
    for (int i=0; i<n; i++)
        if (a[i]%2==0)
            return false;
    return true;        
}
int main()
{
    int n, a[100];
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    if (n==0) 
        cout << "Mang rong";
    else
    if (ktrachan(a,n)==false && ktrale(a,n)==false)
        cout << "Mang khong chua toan so chan hay so le";
    else if(ktrachan(a,n))
        cout << "Mang chua toan so chan";
    else if(ktrale(a,n))
        cout << "Mang chua toan so le";
    return 0;
}