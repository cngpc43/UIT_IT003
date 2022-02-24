#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << " + " << b << " = " << a+b << "\n";
    cout << a << " - " << b << " = " << a-b << "\n";
    cout << a << " x " << b << " = " << a*b << "\n";
    cout << fixed << setprecision(2);
    cout << a << " : " << b << " = " << ((double)a)/b ;
    return 0;
}