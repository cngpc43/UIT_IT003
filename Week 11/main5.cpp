#include <iostream>
#include <math.h>
using namespace std;

bool nto(int x)
{
    if (x<2)
        return false;
    for (int i=2 ; i<=x/2; i++)
        if (x % i == 0 )
            return false;
    return true;
}

int main()
{
    int n,spt=-1,kq[50];
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if (nto(x)==true)
        {
            spt++;
            kq[spt]=x;
        }
    }
    cout << spt+1 << endl;
    for (int i=0; i<=spt; i++)
        cout << kq[i] << " ";
    return 0;
}
