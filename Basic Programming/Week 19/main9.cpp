/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/
#include <iostream>
#include <math.h>

using namespace std;

//###INSERT CODE HERE -
struct Diem
{
    int x, y;
};
void nhapDSDiem(Diem a[], int &n)
{
    cin >> n;
    for (int i=0;i<n; i++)
        cin >> a[i].x >> a[i].y;
}
void xuatDSDiem(Diem a[], int n)
{
    for (int i=0; i<n; i++)
        cout <<  '(' <<a[i].x << ',' << a[i].y << ')'<< endl; 
}
Diem diemDoiXungQuaO(Diem M)
{
    M.x = -M.x;
    M.y = -M.y;
    return M;
}
Diem khoangCachNhoNhat(Diem a[], int n, Diem M)
{
    double min = 100;
    Diem x;
    for (int i=0; i<n ; i++)
    {
        double d = sqrt(pow(a[i].x-M.x,2) + pow(a[i].y-M.y,2));
        if (d<min)
        {
            x = a[i]; 
            min=d;
        }
    }
    return x;
}







int main()
{
    Diem a[100];
    int n;
    nhapDSDiem(a,n); // Nhap danh sach cach diem trong mat phang Oxy
    cout<<"Danh sach diem trong mat phang Oxy:\n";
    xuatDSDiem(a,n); // Xuat danh sach cac diem, moi diem tren 1 dong

    Diem M,N;
    cout<<"\nNhap mot diem de kiem tra khoang cach: ";
    cin>>M.x>>M.y;

    N = diemDoiXungQuaO(M);
    cout<<"\nDiem doi xung voi ("<<M.x<<","<<M.y<<") qua goc toa do O: ("<<N.x<<","<<N.y<<")";

    N = khoangCachNhoNhat(a,n,M);
    cout<<"\nDiem co khoang cach ngan nhat toi ("<<M.x<<","<<M.y<<"): ("<<N.x<<","<<N.y<<")";


    return 0;
}
