#include <iostream>
using namespace std;

void swapArray(int a[], int n)
{
    int temp=a[0];
    a[0]=a[n-1];
    a[n-1]=temp;
}
int main()
{
    int n;
    int a[60];
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    swapArray(a,n);
    for (int i=0; i<n; i++)
        cout << a[i] << endl;
    return 0;
}