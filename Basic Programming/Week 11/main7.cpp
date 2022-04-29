#include <iostream>



using namespace std;

bool ktra(int a[], int n)
{
    for (int i=1; i<=n/2; i++)
        if (a[i]!=a[n-i+1])
            return false;
    return true;
}
int main()
{
    int n, a[10000];
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    if (ktra(a,n))
        cout << "array is palindrome";
    else cout << "array is not palindrome";
}


