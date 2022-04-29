#include <iostream>
using namespace std;

void inputArray(int a[], int &n)
{
    cin >> n;
    for (int i=0;i<n; i++)
        cin >> a[i];
}
bool ngto(int x)
{
    if (x<2)
        return false;
    for (int i=2; i<=x/2; i++)
        if (x%i==0)
            return false;
    return true;
}
bool ktra(int a[], int  n)
{
    int dem=0;
    for (int i=0; i<n; i++)
        if (ngto(a[i])==true)
            dem++;
    if (dem==0)
        return false;
    return true;
}
int tongngto(int a[], int n)
{
    int sum=0;
    for (int i=0;i<n; i++)
        if (ngto(a[i])==true)
            sum+=a[i];
    return sum;
}
int main()
{
    int a[100], n;
    inputArray(a,n);
    if (ktra(a,n)==false)
    {
        cout << "Khong co so nguyen to" ;
        return 0;
    }
    int sum=tongngto(a,n);
    for (int i=0; i<n; i++)
        if (sum%a[i]==0 && ngto(a[i])==true)
        {
            cout << "YES";
            return 0;
        }
    cout << "NO";
    return 0;
}