#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
struct donthuc{
    float coso;
    int somu;
};
struct DATHUC{
    int n;
    donthuc DONTHUC[100];
};

DATHUC *Nhap()
{
    DATHUC *x= new DATHUC;
    cin >> x->n;
    for (int i=0; i<x->n; i++)
        cin >> x->DONTHUC[i].coso >> x->DONTHUC[i].somu;
    return x;
}

void Xuat(DATHUC B )
{
    int flag=0;
    for (int i=0; i<B.n; i++)
        if (B.DONTHUC[i].coso!=0)
        {
            flag++;
            
            if (B.DONTHUC[i].coso<0)
                if (B.DONTHUC[i].coso ==-1)
                    if (B.DONTHUC[i].somu == 0 )
                        cout << B.DONTHUC[i].coso;
                    else cout << '-';
                else cout << B.DONTHUC[i].coso;
                
            if (B.DONTHUC[i].coso>0)
            {   
                if (i!=0 && flag!=1 )
                    cout << '+';
                if (B.DONTHUC[i].coso ==1 && B.DONTHUC[i].somu == 0)
                    cout  << B.DONTHUC[i].coso;
                if ( B.DONTHUC[i].coso != 1 )
                    cout << B.DONTHUC[i].coso ;
            }
            if (B.DONTHUC[i].somu == 1)
                cout << 'x';
            else if (B.DONTHUC[i].somu != 0)
                cout <<  "x^" << B.DONTHUC[i].somu ;
        }
    if (flag==0)
        cout << 0;
    cout << endl;
}
double TinhDaThuc(DATHUC B, double x)
{   
    double kq=0;
    for (int i=0; i<B.n; i++)
        kq+= B.DONTHUC[i].coso * pow(x,B.DONTHUC[i].somu);
    return kq;
}




int main() {
    DATHUC *B; B = Nhap();
    cout << "Da thuc vua nhap la: "; Xuat(*B);
    double x; cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(*B, x);
    return 0;
}