#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x;
    int d;
   
    cin >> x >> d;
    cout << roundf(x*pow(10,d))/pow(10,d);

    return 0;
}