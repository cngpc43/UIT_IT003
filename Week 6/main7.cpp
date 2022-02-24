#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int x;
    cin >> x;



    char dau=' ';
    if (x<0)
    {
        dau='-';
        x=-x;
    }
    if (x==0)
        cout << 0;
    while (x!=0)
    {   
        cout << x%10 ;
        x=x/10;
        if (x!=0)
            cout << endl;
    }
    if (dau=='-')
        cout << "\n" << dau;


    return 0;
}
