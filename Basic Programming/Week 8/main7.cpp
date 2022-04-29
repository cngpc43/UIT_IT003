#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    int n, a[100];



    bool ktra=true;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<n; i++)
        if (a[i]%2!=0)
        {
            ktra=false;
            break;
        }
    if(ktra==true)
        cout << "yes"; 
    else 
        cout << "no";
    




    return 0;
}