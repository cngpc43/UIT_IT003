#include <iostream>
using namespace std;

int main()
{
    int m,n;
    int a[15], b[15], c[30];
    cin >> m >> n;
    for (int i=0; i<m; i++)
        cin >> a[i];
    for (int i=0; i<n; i++)
        cin >> b[i];

    for (int i=0; i<m; i++)
        c[i]=a[i];
    for (int i=m; i<m+n; i++)
        c[i]=b[i-m];   
    
    for (int i=0; i<m+n; i++)
        cout << c[i] << " ";
    return 0;
}