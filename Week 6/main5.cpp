#include <iostream>
using namespace std;

int main()
{
    long n,dem=0,temp;
    cin >> n;
    temp=n;
    while (n!=0)
    {
        dem++;
        n=n/10;
    }
    if (temp==0) 
        dem=1;
    cout << "So " << temp << " co " << dem <<" chu so";
    if (temp<0) 
        cout << " va 1 dau";
    return 0; 
}