/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

//###INSERT CODE HERE -
void Nhap(char x[])
{
    cin.getline(x,100);
}
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
bool ktra(char s1[], char s2[])
{
    if (strlen(s1) != strlen(s2))
        return false;
    for (int i=0; i<strlen(s1); i++)
        if (s1[i] != s2[i])
            return false;
    return true;
}
void xoa(SinhVien a[],int &n, int vitrixoa)
{
    for(int i=vitrixoa;i<n;i++)
        a[i]=a[i+1];
}
void XoaTheoHoTen(SinhVien a[], int &n, char hoTenCanXoa[])
{
    for (int i=0; i<n; i++)
        if (ktra(a[i].HoTen,hoTenCanXoa))
        {
            xoa(a,n,i);
            i--;
            n--;
        }
}






int main() {
    SinhVien A[MAXN];
    char hoTenCanXoa[100];
    int n;

    Nhap(hoTenCanXoa);

    Nhap(A, n);

    XoaTheoHoTen(A, n, hoTenCanXoa);

    Xuat(A, n);
    return 0;
}
