#include <iostream>

using namespace std;

int sumTwo(int a, int b)
{

    return a+b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "The sum of " << a << " and " << b << " is " << sumTwo(a,b);
    return 0;
}
