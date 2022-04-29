#include <iostream>
using namespace std;


int main()
{
    int n,x,y;
    int a[10];
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    cin>> x >> y;
    for (int i=0; i<n; i++)
        if (a[i]==x)
            a[i]=y;
    for (int i=0; i<n; i++)
        cout << a[i] << endl;
    return 0;
}