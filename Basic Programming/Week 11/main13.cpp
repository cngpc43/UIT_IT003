#include <iostream>
using namespace std;

void input(int a[], int &n, int &k)
{
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    cin >> k;
}
void output(int a[], int n, int k)
{
    for (int i=0; i<n; i++)
        if (a[i]!=k)
            cout << a[i] << " ";
}
int main()
{
    int n, a[1000], k;
    input(a,n,k);
    output(a,n,k);
    return 0;
}