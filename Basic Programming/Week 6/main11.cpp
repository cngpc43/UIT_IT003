#include <iostream>
using namespace std;

int main()
{
    int n,k, p , q, vt;
    cin >> n >> k >> p >> q;
    vt=(p-1)*2+q;
    if (vt-k<=0 && vt+k >n)
        cout << -1;
    else if (vt-k>0)   
    {
        cout << (vt-k+1)/2 << " " ;
        if ((vt-k)%2==0) 
            cout << 2;
        else cout << 1;
    }
    else if (vt+k<=n)   
    {
        cout << (vt+k+1)/2 << " " ;
        if ((vt+k)%2==0) 
            cout << 2;
        else cout << 1;
    }
    return 0;
}