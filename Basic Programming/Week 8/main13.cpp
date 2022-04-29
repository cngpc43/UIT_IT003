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
    {
        midlle = a[n/2] + a[(n/2)+1];
        //if (midlle==a[1] && midlle == a[n] )
        {
            a[n/2]= midlle;
            for (int i=(n/2)+1 ; i<=n-1; i++)
                a[i]=a[i+1];
            for (int i=1; i<=n-1; i++)
            cout << a[i] << " ";
            return 0;
        }
    }
    else
    for (int i=1; i<=n; i++)
        cout << a[i]  << " ";
    return 0;
}
