#include <iostream>
#include <math.h>

using namespace std;


//###INSERT CODE HERE -
void getNumber(int a[], int na, int b[], int &nb, int c[],int &nc, int d[], int &nd)
{
    nb = nc = nd = -1;
    for (int i=0; i<na; i++)
    {
        if (a[i]>0)
        {
            nb++;
            b[nb]=a[i];
        }
        if (a[i]<0)
        {
            nc++;
            c[nc]=a[i];
        }
        if (a[i]==0)
        {
            nd++;
            d[nd]=a[i];
        }
    }
    nb++; nc++ ; nd++;
}
void inputArray(int x[], int &n)
{
    cin >> n;
    for (int i=0; i<n; i++)
        cin >>  x[i] ;
}
void outputArray(int x[], int n)
{
    for (int i=0; i<n; i++)
        cout << x[i] << " ";
}



int main()
{
    int na, a[100], nb, b[100], nc, c[100], nd, d[100];
    inputArray(a,na);
    cout<<"Array a:"<<endl;
    outputArray(a,na);
    cout<<endl;

    getNumber(a,na,b,nb,c,nc,d,nd);

    cout<<"\nArray b:";outputArray(b,nb);
    cout<<"\nArray c:";outputArray(c,nc);
    cout<<"\nArray d:";outputArray(d,nd);

    return 0;
}
