#include <iostream>
#include <math.h>
using namespace std;

struct PS 
{
    int tu, mau;
};

void input(PS a[], int n)
{
    for (int i=n-1; i>=0; i--)
        cin >> a[i].tu >> a[i].mau;
}
void rutgon(PS kq)
{
    if (kq.tu==0)
    { 
        cout << 0 ;
        return ;
    }
    int x=abs(kq.tu), y=abs(kq.mau);
    while (x!=y)
        if (x>y)
            x=x-y;
        else y=y-x;
    kq.tu=kq.tu/x;
    kq.mau=kq.mau/y;
    if (kq.tu<0 && kq.mau <0)
    {
        kq.tu=abs(kq.tu);
        kq.mau=abs(kq.mau);
    }
    else
    if (kq.tu>0 && kq.mau <0)
    {
        kq.tu=-kq.tu;
        kq.mau=abs(kq.mau);
    }
    cout << kq.tu ;
    if (kq.mau==1) return ;  
    cout << "/" << kq.mau;
}

int main ()
{
    PS a[10000];
    int n;
    cin >> n;
    input(a,n);
    for (int i=0; i<n; i++)
        if (a[i].mau==0)
            cout << "Khong thoa yeu cau bai toan" << endl;
        else 
        {
            rutgon(a[i]);
            cout << endl;
        }
    return 0;
}