#include <iostream>
#include <math.h>
using namespace std;
class PhanSo
{
private:
    /* data */
    int TuSo;
    int MauSo;

public:
    void Nhap()
    {
        cin >> TuSo >> MauSo;
        while (MauSo == 0)
        {
            cout << "Mau so khong hop le. Moi nhap lai: " << endl;
            cin >> MauSo;
        }
        if (TuSo > 0 && MauSo < 0)
        {
            TuSo = -TuSo;
            MauSo = -MauSo;
        }
    }
    PhanSo Cong(PhanSo ps2)
    {
        PhanSo Tong;
        Tong.TuSo = (TuSo * ps2.MauSo + ps2.TuSo * MauSo);
        Tong.MauSo = MauSo * ps2.MauSo;
        return Tong;
    }
    PhanSo Tru(PhanSo ps2)
    {
        PhanSo Hieu;
        Hieu.TuSo = (TuSo * ps2.MauSo - ps2.TuSo * MauSo);
        Hieu.MauSo = MauSo * ps2.MauSo;
        return Hieu;
    }
    PhanSo Tich(PhanSo ps2)
    {
        PhanSo Tich;
        Tich.TuSo = (TuSo * ps2.TuSo);
        Tich.MauSo = (MauSo * ps2.MauSo);
        return Tich;
    }
    PhanSo Thuong(PhanSo ps2)
    {
        PhanSo Thuong;
        if (ps2.TuSo != 0)
        {
            Thuong.TuSo = TuSo * ps2.MauSo;
            Thuong.MauSo = MauSo * ps2.TuSo;
        }
        else
        {
            PhanSo error;
            error.TuSo = 1;
            error.MauSo = 0;
            return error;
        }
        return Thuong;
    }
    int GCD(int a, int b)
    {
        a = abs(a);
        b = abs(b);
        if (a == 0 || b == 0)
            return a + b;
        while (a != b)
        {
            if (a > b)
                a -= b;
            else
                b -= a;
        }
        return a;
    }

    void Xuat()
    {
        if (MauSo == 0)
        {
            cout << "ERROR";
            return;
        }

        int x = GCD(TuSo, MauSo);
        TuSo /= x;
        MauSo /= x;
        if (TuSo % MauSo == 0)
        {
            cout << TuSo / MauSo;
        }
        else
        {
            cout << TuSo << " " << MauSo;
        }
    }
};
int main()
{
    PhanSo ps1, ps2;
    cout << "Nhap phan so thu 1: ";
    ps1.Nhap();
    cout << "Nhap phan so thu 2: ";
    ps2.Nhap();
    cout << "Ket qua phep cong: ";
    ps1.Cong(ps2).Xuat();
    cout << endl
         << "Ket qua cua phep tru: ";
    ps1.Tru(ps2).Xuat();
    cout << endl
         << "Ket qua cua phep nhan: ";
    ps1.Tich(ps2).Xuat();
    cout << endl
         << "Ket qua cua phep chia: ";
    ps1.Thuong(ps2).Xuat();
    return 0;
}