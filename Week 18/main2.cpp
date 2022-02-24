
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
for
while
###End banned keyword*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//###INSERT CODE HERE -
long vitrung(int n)
{
    if (n==0)
        return 2;
    return vitrung(n-1)*2;
}
double luythua(float x, int n)
{
    if (n==0)
        return 1;
    return luythua(x,n-1)*x;
}
long goitien(int n)
{
    if (n == 0) return 1000;
    return (1 + 12.0/100) *  goitien(n - 1);
}
long giaithua(int n)
{
    if (n==0)
        return 1;
    return giaithua(n-1)*n;
}
long fibo(int n)
{
    if (n == 0 || n == 1) 
        return 1;
	return fibo(n-1) + fibo(n-2);
}

int ucln_du(int a, int b) 
{
    a=abs(a); b=abs(b);
    if (b == 0) 
        return a;
    return ucln_du(b, a % b);
}
int ucln_tru(int a, int b)
{
    a=abs(a); b=abs(b);
    if (a==0 || b==0)
        return a+b;
    return (a>b) ?  ucln_tru(a-b, b) : ucln_tru(a,b-a);
}
int tohop(int n, int k)
{
    // if (k == 0 || k == n) 
    //     return 1;
    // if (k == 1) 
    //     return n;
    // return tohop(n - 1, k - 1) + tohop(n-1, k );
    if (k>n)
        return 0;
    return (giaithua(n) / (giaithua(k) * giaithua(n-k)));
}






int main()
{

    int n;
    cout<<"Nhap n: "<<endl;
    cin>>n;
    cout<<"Sau "<<n<<" gio co "<<vitrung(n)<<" con vi trung"<<endl;
    cout<<"Sau "<<n<<" nam, so tien co duoc: "<<goitien(n)<<endl;
    cout<<n<<"!: "<<giaithua(n)<<endl;
    cout<<"Fibo("<<n<<"): "<<fibo(n)<<endl;

    cout<<"Nhap x: "<<endl;
    float x; cin>>x;
    cout<<x<<" luy thua "<<n<< ": "<<setprecision(15)<<luythua(x,n)<<endl;

    cout<<"Nhap a va b: "<<endl;
    int a, b; cin>>a>>b;
    cout<<"Uoc chung lon nhat cua "<<a<<" va "<<b<<": ";
    cout<<ucln_tru(a,b)<<" "<<ucln_du(a,b)<<endl; // Tim UCLN su dung phep chia du hoac phep tru


    cout<<"Nhap k: "<<endl;
    int k; cin>>k;
    cout<<"So luong to hop chap "<<k<<" cua "<<n<<" phan tu: "<<tohop(n,k);


    return 0;
}
