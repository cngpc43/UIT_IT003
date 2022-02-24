#include <iostream>
using namespace std;

int main()
{
    double x,y,lai,z;
    cin >> x >> y >> z;
    lai = ((z / 100) * (y / 12)) * x;
    cout << ((long)(x + lai));
    return 0;
}