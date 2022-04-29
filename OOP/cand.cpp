#include <iostream>
using namespace std;
class can
{
private:
    char ma[10];
    char ten[30];
    char date[30];
    float fDiemToan, fDiemVan, fDiemAnh;

public:
    float tong()
    {
        return fDiemAnh + fDiemToan + fDiemVan;
    }
    void Nhap()
    {
        cout << "Nhap MSSV: " << endl;
        cin.getline(ma, 10);
        cout << "Nhap ten SV: " << endl;
        cin.getline(ten, 30);

        cout << "Nhap ngay sinh: " << endl;
        cin.getline(date, 30);
        cout << "Nhap lan luot diem toan, diem van, diem anh: " << endl;
        cin >> fDiemToan >> fDiemVan >> fDiemAnh;
        cin.ignore();
    }
    void Xuat()
    {
        cout << ma << "\t" << ten << "\t" << date << "\t" << fDiemToan << "\t" << fDiemVan << "\t" << fDiemAnh << endl;
    }
};

int main()
{
    int n;
    cout << "Nhap vao so luong thi sinh: ";
    cin >> n;
    cin.ignore();
    can *p = new can[n];
    for (int i = 0; i < n; i++)
    {
        p[i].Nhap();
    }
    for (int i = 0; i < n; i++)
    {
        if (p[i].tong() > 15)
        {
            p[i].Xuat();
        }
    }
}
