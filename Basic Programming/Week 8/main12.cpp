#include <iostream>




using namespace std;
int main()
{
    int n,midlle;
    int a[100000];
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    if (n%2==0)
        midlle= a[n/2] + a[(n/2)+1];
    else 
        midlle= a[(n/2)+1];
    if (midlle==a[1] && midlle == a[n])
        cout << 1;
    else cout << 0;
    return 0;
}