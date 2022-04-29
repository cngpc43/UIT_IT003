#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b;

    cin >> a >> b;
    cout << "(" << a << ") + (" << b  << ") = " << roundf((a+b)*100)/100 <<endl;
    cout << "(" << a << ") - (" << b  << ") = " << roundf((a-b)*100)/100 <<endl;
    cout << "(" << a << ") * (" << b  << ") = " << roundf((a*b)*100)/100 <<endl;
    cout << "(" << a << ") / (" << b  << ") = " << roundf((a/b)*100)/100 <<endl;



    return 0;
}


