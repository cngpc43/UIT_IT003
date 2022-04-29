#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c;
    double x1,x2,delta;
    cin >> a >> b >> c;
    if (a!=0)
    {
        delta=b*b-4*a*c;
        if(delta > 0) 
            {
                x1 = (-b+sqrt(delta))/(2*a);
                x2 = (-b-sqrt(delta))/(2*a);
                if (x1<=x2) 
                    cout << x1 << " " << x2;
                else  cout << x2 << " " << x1;
            }
        else if (delta==0)
        {   
            double x=-b/(2*a);
            if (x==-0)
                cout << -x << " " << -x;
            else 
            cout << x << " " << x;
        } 
        else cout<<"IE" ;
    }
    else 
        if (b == 0 && c == 0)
            cout << "INF";
        else if (b==0 && c != 0)
            cout << "IE";
        else if (b!=0 && c==0 )
            cout << 0;
        else
            cout <<  (-c) / b;
    return 0;
}