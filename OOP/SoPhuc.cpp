#include <iostream>
#include <math.h>
#include "SoPhuc.h"
using namespace std;
ostream &operator<<(ostream &out, SoPhuc a)
{
    if (a.phanAo < 0)
    {
        out << a.phanThuc << " - " << abs(a.phanAo) << 'i' << endl;
    }
    else
        out << a.phanThuc << " + " << a.phanAo << 'i' << endl;
    return out;
}
istream &operator>>(istream &in, SoPhuc &a)
{
    in >> a.phanThuc >> a.phanAo;
    return in;
}
void SoPhuc::KhoiTaoSophuc(float x, float y)
{
    phanAo = y;
    phanThuc = x;
}

SoPhuc SoPhuc ::operator+(SoPhuc soPhuc2)
{
    SoPhuc tong;
    tong.phanThuc = phanThuc + soPhuc2.phanThuc;
    tong.phanAo = phanAo + soPhuc2.phanAo;
    return tong;
}

SoPhuc SoPhuc ::operator-(SoPhuc soPhuc2)
{
    SoPhuc hieu;
    hieu.phanThuc = phanThuc - soPhuc2.phanThuc;
    hieu.phanAo = phanAo - soPhuc2.phanAo;
    return hieu;
}
SoPhuc SoPhuc ::operator*(SoPhuc soPhuc2)
{
    // aa' - bb' + (ab' + a'b)i
    SoPhuc tich;
    tich.phanThuc = phanThuc * soPhuc2.phanThuc - phanAo * soPhuc2.phanAo;
    tich.phanAo = phanThuc * soPhuc2.phanAo + soPhuc2.phanThuc * phanAo;
    return tich;
}
SoPhuc SoPhuc ::operator/(SoPhuc soPhuc2)
{
    SoPhuc thuong;
    thuong.phanThuc = (phanThuc * soPhuc2.phanThuc + phanAo * soPhuc2.phanAo) / (soPhuc2.phanThuc * soPhuc2.phanThuc + soPhuc2.phanAo * soPhuc2.phanAo);
    thuong.phanAo = (soPhuc2.phanThuc * phanAo - phanThuc * soPhuc2.phanAo) / (soPhuc2.phanAo * soPhuc2.phanAo + soPhuc2.phanThuc * soPhuc2.phanThuc);
    return thuong;
}
float SoPhuc::TriTuyetDoi()
{
    float tdt;
    tdt = sqrt(pow(phanAo, 2) + pow(phanThuc, 2));
    return tdt;
}
int main()
{
    SoPhuc s1, s2;
    cout << "Nhap so phuc 1:" << endl;
    cin >> s1;
    cout << "Nhap so phuc 2:" << endl;
    cin >> s2;
    cout << "Ket qua phep cong 2 so phuc" << endl;
    cout << (s1 + s2);
    cout << "Ket qua phep tru 2 so phuc" << endl;
    cout << (s1 - s2);
    cout << "Ket qua phep nhan 2 so phuc" << endl;
    cout << (s1 * s2);
    cout << "Ket qua phep chia 2 so phuc" << endl;
    cout << (s1 / s2);
    cout << "Ket qua cua tri tuyet doi so phuc thu 1:" << s1.TriTuyetDoi() << endl;
    cout << "Ket qua cua tri tuyet doi so phuc thu 2:" << s2.TriTuyetDoi() << endl;
}