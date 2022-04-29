#include <iostream>
using namespace std;

int main()
{
    int n,s=0;
    cin >> n;
    while (n!=0)
    {
        s = s + n%10;
        n = n / 10;
    }
    cout << s << ", " << s/10 << ", " << s%10;
    return 0;
}