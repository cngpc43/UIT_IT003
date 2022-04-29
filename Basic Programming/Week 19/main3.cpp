/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

//###INSERT CODE HERE -
#include <iostream>
#include <math.h>
using namespace std;

struct PhanSo{
    int tu;
    int mau;
};
void Nhap(PhanSo &a){
    cin >> a.tu >>  a.mau;
}
PhanSo Nhap()
{
    PhanSo x;
    cin >> x.tu >> x.mau;
    return x;
}

void Xuat(PhanSo kq){
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
    if (kq.tu==0) return ;
    if (kq.mau==1) return ;  
    cout << "/" << kq.mau;
}
void rutgon(PhanSo &kq)
{
    if (kq.tu==0 )
        return;
    int x=abs(kq.tu), y=abs(kq.mau);
    while (x!=y )
        if (x>y)
            x=x-y;
        else y=y-x;
    kq.tu=kq.tu/x;
    kq.mau=kq.mau/y;
}
PhanSo Cong(PhanSo a, PhanSo b)
{
    PhanSo kq;
    kq.tu = a.tu*b.mau + b.tu*a.mau;
    kq.mau = a.mau*b.mau;
    rutgon(kq);
    return kq;
}






int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Cong(a, b));
    return 0;
}
