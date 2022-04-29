#include <iostream>
#include <string>
#define HocBongXS 10000;
#define HocBongGioi 8000;
#define HocBongKha 5000;
using namespace std;

class SinhVien
{
private:
    char cID[10];
    char cFullName[30];
    float fOOP;
    float fDSA;
    int HB = 0;

public:
    SinhVien(){};
    void Nhap()
    {
        cout << "Nhap ma hoc sinh: ";
        cin.getline(cID, 10);
        cout << "Nhap ho ten hoc sinh: ";
        cin.getline(cFullName, 30);
        cout << "Nhap diem OOP: ";
        cin >> fOOP;
        cout << "Nhap diem DSA: ";
        cin >> fDSA;
    }
    float getOOP()
    {
        return fOOP;
    }
    float getDSA()
    {
        return fDSA;
    }
    void Xuat()
    {
        cout << "MaHS :\t" << cID << endl;
        cout << "Ho Ten:\t" << cFullName << endl;
        cout << "Diem OOP:\t" << fOOP << endl;
        cout << "Diem DSA:\t" << fDSA << endl;
        // cout << "Tong diem:\t" << TinhDiemTong() << endl;
        // cout << "Diem TB:\t" << TinhDTB() << endl;
        // XepLoai();
        // cout << "Hoc bong: " << HocBong() << endl;
        // cout << "Hoc bong OOP: " << HocBongOOP() << endl;
    }
    // int HocBongOOP()
    // {
    //     if (fOOP >= 9)
    //         return HocBongXS;
    //     if (fOOP >= 8)
    //         return HocBongGioi;
    //     if (fOOP >= 6)
    //         return HocBongKha;
    // }

    // void XepLoai()
    // {
    //     cout << "Xep loai: ";
    //     if (TinhDTB() >= 9)
    //         cout << "Xuat sac" << endl;
    //     else if (TinhDTB() >= 8)
    //         cout << "Gioi" << endl;
    //     else if (TinhDTB() >= 6)
    //         cout << "Kha" << endl;
    //     else if (TinhDTB() >= 4)
    //         cout << "Trung Binh" << endl;
    //     else
    //         cout << "Yeu" << endl;
    // }
};
class Lop
{
private:
    int n = 0;
    SinhVien a[];

public:
    Lop()
    {
    }
    void Nhap()
    {
        char x;
        while (1)
        {
            cout << "Nhap thong tin sinh vien thu " << n + 1 << ": " << endl;
            a[n].Nhap();
            n++;
            cout << "Nhap Y de tiep tuc/ nhap N de dung lai" << endl;
            cin >> x;
            cin.ignore();
            if (x == 'N')
                break;
        }
    }
    void HocBong()
    {
        float max = 0;
        Sort(a);
    }
    void Sort(SinhVien *a)
    {
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (a[i].getOOP() < a[j].getOOP())
                    swap(a[i], a[j]);
    }
    void HocBong(int k)
    {
        for (int i = 0; i < k; i++)
            a[i].Xuat();
        cout << endl;
    }
};
// class Nganh{
//     private:
//         int n=0;
//         Lop dslop[10];
//     public:
//         void Nhap(){
//            char x;
//             while (1){
//                 dslop[n].Nhap();
//                 n++;
//                 cout << "Nhap Y de tiep tuc/ nhap N de dung lai" << endl;
//                 cin >> x;
//                 cin.ignore();
//                 if (x == 'N')
//                     break;
//             }
//         }
//         void HocBong(){
//         }
// };

int main()
{
    Lop A;
    cout << "______Nhap thong tin cua sinh vien cua lop_______" << endl;
    A.Nhap();
    cout << endl;

    int k;
    cout << "Nhap so luong hoc bong: ";
    cin >> k;
    cout << "___________Thong tin sinh vien co hoc bong___________" << endl;
    A.HocBong(k);

    return 0;
}