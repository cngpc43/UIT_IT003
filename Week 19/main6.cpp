/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

//###INSERT CODE HERE -]
void Nhap1SV(SinhVien &a)
{
    cin.getline(a.MASV,10);
    cin.getline(a.HoTen,100);
    cin.getline(a.NgaySinh,12);
    cin >> a.GioiTinh;
    cin >> a.DiemToan >> a.DiemLy >> a.DiemHoa;
    cin.ignore();
    a.DTB = (a.DiemToan + a.DiemLy + a.DiemHoa)/3;
}
void Nhap(SinhVien a[], int &n)
{
    cin >> n;
    cin.ignore();
    for (int i=0; i<n; i++)
        Nhap1SV(a[i]);
}
void Xuat1SV(SinhVien a){
    cout << a.MASV << "\t" << a.HoTen << "\t" << a.NgaySinh << "\t" << a.GioiTinh << "\t" << setprecision(3)  
    << a.DiemToan << "\t" << a.DiemLy << "\t" << a.DiemHoa << "\t"  << a.DTB;
}
void Xuat(SinhVien a[], int n)
{
    for (int i=0; i<n; i++)
    {
        Xuat1SV(a[i]);
        cout << endl;
    }
    
}




int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    Xuat(A, n);
    return 0;
}
