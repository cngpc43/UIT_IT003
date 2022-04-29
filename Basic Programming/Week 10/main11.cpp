#include <iostream>
#include <math.h>
using namespace std;



void inputArray(int a[], int &na)
{
    cin >> na;
    for (int i=0; i<na; i++)
        cin >> a[i] ;
}
void outputArray(int a[], int na)
{
    for (int i=0; i<na ; i++)
        cout << a[i] << " ";
}
int deleteElement(int a[],int &n, int pos)
{
    cout << endl;
    if (pos < 0 || pos >= n)
    {
        cout << "Loi xoa: Vi tri khong hop le";
        return -1;
    }
    else
    {
        for (int i=pos; i<n; i++)
            a[i]=a[i+1];
        n--;
        return 1;
    }
}




int main()
{
    int n, a[100],pos;
    inputArray(a,n);
    cin>>pos;
    cout<<"Before: ";
    outputArray(a,n);

    if (deleteElement(a,n,pos)!=-1)
    {
        cout<<"\nAfter: ";
        outputArray(a,n);
    }

    return 0;
}
