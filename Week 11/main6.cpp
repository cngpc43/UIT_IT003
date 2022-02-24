#include <iostream>
using namespace std;

void input(int a[], int &n)
{
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
}

bool tang(int a[], int n)
{
    for (int i=0; i<n-1; i++)
        if (a[i]>=a[i+1])
            return false;
    return true;        
}
bool giam(int a[], int n)
{
    for (int i=0; i<n-1; i++)
        if (a[i]<=a[i+1])
            return false;
    return true;        
}

void process(int a[], int n)
{
    
    if (tang(a,n)==false && giam(a,n)==false)
        cout << "Mang khong tang, khong giam";
    else if(tang(a,n))
        cout << "Mang tang dan";
    else if(giam(a,n))
        cout << "Mang giam dan";
}
int main()
{
    int n, a[1000];
    input(a,n);
    process(a,n);
    return 0;
}


