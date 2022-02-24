include <iostream>
#include <math.h>

using namespace std;


void inputArray(int a[], int &na, int b[], int &nb)
{
    cin >> na >> nb;
    for (int i=0; i<na; i++)
        cin >> a[i] ;
    for (int i=0; i<nb; i++)
        cin >> b[i] ;
}
void connect(int a[],int na,int b[],int nb,int c[],int &nc)
{
    nc =  na+ nb; 
    for (int i=0; i<nb; i++)
        c[i] = b[i];
    for (int i=nb, j=na-1; i<nc, j>=0; i++, j--)
        c[i] = a[j];
    
}
void outputArray(int a[], int na)
{
    for (int i=0; i<na ; i++)
        cout << a[i] << " ";
}



int main()
{
    int na, a[100], nb, b[100], nc, c[100];
    inputArray(a,na,b,nb);
    cout<<"Array a: "   ;outputArray(a,na);
    cout<<"\nArray b: " ;outputArray(b,nb);

    connect(a,na,b,nb,c,nc);

    cout<<"\nArray c: ";outputArray(c,nc);

    return 0;
}