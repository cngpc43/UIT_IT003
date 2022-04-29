#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if (a+b<=c || a+c <=b || b+c<=a)    
        cout << "KHONG";
    else if (a==b && b==c)
        cout << "DEU";
    else if (a==b || a==c|| b==c)  
        cout <<"CAN";
    else if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
        cout << "VUONG";
    else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)    
        cout << "TU";
    else cout << "NHON";
    return 0;
}