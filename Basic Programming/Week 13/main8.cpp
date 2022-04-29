#include <iostream>
#include <math.h>
using namespace std;

struct PS 
{
    int tu, mau;
};

void input(PS &a)
{
    cin >> a.tu >> a.mau;
}
void rutgon(PS &kq)
{
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
}
void xuli(PS a, PS b, char x)
{
    PS kq;
    switch (x)
    {
        case '+':
        {
            kq.tu = a.tu*b.mau + b.tu*a.mau;
            kq.mau = a.mau*b.mau;
            rutgon(kq);
            break;
        }
        case '-':
        {
            kq.tu = a.tu*b.mau - b.tu*a.mau;
            kq.mau = a.mau*b.mau;
            rutgon(kq);
            break;
        }
        case '*':
        {
            kq.tu = a.tu * b. tu;
            kq.mau = a.mau*b.mau;
            rutgon(kq);
            break;
        }
        case '/':
        {
            kq.tu = a.tu * b.mau;
            kq.mau = a.mau*b.tu;
            rutgon(kq);
            break;
        }
    }
    cout << kq.tu << "/" << kq.mau;
}
int main ()
{
    PS a,b;
    char x;
    input(a);
    input(b);
    if (a.mau==0 || b.mau==0)
    {
        cout << "Khong thoa yeu cau bai toan";
        return 0;
    };
    cin >> x;
    xuli(a,b,x);
}