#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i=1; i<=n ; i++)
    {
        int a,b;
        cin >> a >> b;
        if (a==0 && b==0)
            cout << 'O' << endl;
        else if (a==0 && b!=0)
            cout << 'T' << endl;
        else if (a!=0 && b==0)
            cout << 'H' << endl;
        else if (a>0 && b>0)
            cout << 'I' << endl;
        else if (a<0 && b>0)
            cout << "II" << endl;
        else if (a<0 && b<0)
            cout << "III" << endl;
        else if (a>0 && b<0)
            cout << "IV" << endl;
    } 
    return 0; 
}