#include <iostream>
#include <math.h>
using namespace std;



int ham_x(int a[], int n)
{
    int dem=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]<0) 
        {
            a[i]=-a[i];
            dem++;
        }
        if (a[i]==0) 
            dem++;
        int n=a[i];
        while (n>0)
        {
            dem++;
            n = n / 10;
        }
    }
    return dem;
}




int main()
{
    int n, a[1000000], dem = 0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout << ham_x(a,n);

    return 0;
}
