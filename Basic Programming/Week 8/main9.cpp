#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    int n, a[100];


    bool ktrachan=true;
    bool ktrale=true;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<n; i++)
        if (a[i]%2!=0)
        {
            ktrachan=false;
            break;
        }
    for (int i=0; i<n; i++)
        if (a[i]%2==0)
        {
            ktrale=false;
            break;
        }
    if (n==0)
        cout << "Mang rong";
    else
    if (ktrachan==false && ktrale==false)
        cout << "Mang khong chua toan so chan hay so le";
    else if(ktrachan)
        cout << "Mang chua toan so chan";
    else if(ktrale)
        cout << "Mang chua toan so le";



    return 0;
}
