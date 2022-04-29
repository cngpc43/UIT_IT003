/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
###End banned keyword*/

#include <iostream>

//###INSERT CODE HERE -
using namespace std;
void sort(int a[],int n)
{
    for (int i=1; i<=n-1; i++)
        for (int j=i+1; j<=n; j++)
            if (a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
}
int main()
{
    int chan[10000], le[10000];
    int n,spt_chan=0,spt_le=0;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            spt_chan++;
            chan[spt_chan]=x;
        }
        else
        {
            spt_le++;
            le[spt_le]=x;
        }
    }
    sort(chan,spt_chan);
    sort(le,spt_le);
    for (int i=1; i<=spt_chan; i++)
        cout << chan[i] << endl;
    for (int i=1; i<=spt_le; i++)
        cout << le[i] << endl;
    return 0;
}


