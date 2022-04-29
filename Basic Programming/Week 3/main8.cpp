#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a == 0 && b == 0)
        cout << "VSN";
    else if (a == 0)
        cout << "VN";
    else
        cout << "x = " << (double)(-b) / a;
    return 0;
}
