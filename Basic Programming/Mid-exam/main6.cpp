/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
#include <math.h>
using namespace std;

bool LaSNT(int n);
int SNTthuN(int n);

int main()
{
    int n;     
    cin >> n; 
    cout << SNTthuN(n) << endl;
    return 0;
}

//###INSERT CODE HERE -
bool LaSNT(int x)
{
    if (x<2)
        return false;
    for (int i=2; i<=x/2; i++)
        if (x%i==0)
            return false;
    return true;
}
int SNTthuN(int n)
{
    int dem=0;
    if (n<=0)
        return -1;
    for (int i=0;i<10000; i++)
        if (LaSNT(i)==true)
        {
            dem++;
            if (dem==n)
                return i;
        }
}
