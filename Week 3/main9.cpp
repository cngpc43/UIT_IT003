#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c;
    double x1,x2,delta;
    cin >> a >> b >> c;

    delta=b*b-4*a*c;
    if(delta > 0) 
        {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            cout<<"PT co hai nghiem phan biet: \n\n"<< "x1" << " = " << x1 << "\n\n" << "x2" << " = " <<x2;
            return 0;
        }
    else if ( delta == 0)
    {
        cout<<"PT co nghiem kep: " << "x1" << " = " << "x2" << " = " << (float)-b/(2*a) ;
        return 0;
    }
    else 
    {
        cout<<"PTVN" <<endl;
        return 0;
    }
}