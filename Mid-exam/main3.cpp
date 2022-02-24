#include <iostream>
using namespace std;

void inputArray(int a[], int &n)
{
    cin >> n;
    for (int i=0;i<n; i++)
        cin >> a[i];
}
void xuli(int a[], int n)
{
    int vt=0;
    for (int i=0; i<n; i++)
        if (a[i]>=a[vt])
            vt =i;
    cout << a[vt] << endl << vt;
}

int main()
{
    int a[100], b[100], n;
    inputArray(a,n);
    xuli(a,n);
    return 0;
}