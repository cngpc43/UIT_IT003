/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

//###INSERT CODE HERE -
#include <iostream>
#include <math.h>
using namespace std;
#define MAXN 100

struct PhanSo{
    int tu;
    int mau;
};
void Nhap(PhanSo a[], int &n){
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i].tu >>  a[i].mau;
}
void print(PhanSo kq)
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
void Xuat(PhanSo a[], int n){
    for (int i=0; i<n; i++)
        if (a[i].mau==0)
            cout << "Khong thoa yeu cau bai toan" << endl;
        else 
        {
            print(a[i]);
            cout << endl;
        }
}




int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}

