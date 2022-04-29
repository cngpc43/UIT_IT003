/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

//###INSERT CODE HERE -
#include <iostream>
#include <math.h>
using namespace std;

struct PhanSo
{
    int tu;
    int mau;
};
void Nhap(PhanSo &a)
{
    cin >> a.tu >>  a.mau;
}
PhanSo Nhap()
{
    PhanSo x;
    cin >> x.tu >> x.mau;
    return x;
}
void chuanhoa(PhanSo &kq)
{
    if (kq.tu<=0 && kq.mau <0)
    {
        kq.tu=abs(kq.tu);
        kq.mau=abs(kq.mau);
    }
    if (kq.tu>=0 && kq.mau <0)
    {
        kq.tu=-kq.tu;
        kq.mau=abs(kq.mau);
    }
}
int SoSanh(PhanSo a, PhanSo b)
{
    chuanhoa(a);
    chuanhoa(b);
    a.tu = a.tu * b.mau;
    b.tu = b.tu * a.mau;
    return (a.tu - b.tu);
}






int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
