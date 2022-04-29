#include <iostream>

using namespace std;

int main()
{

    int a,b;
    cin >> a >> b;
    while( a == b )
    {
        cout << 1;
        break;
    }
    while (a!=b )
    {
        cout << 0;
        break;
    }

    return 0;
}