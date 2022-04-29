#include <iostream>
using namespace std;

int main()
{
    long long n,s=0;
    cin >> n;
    long long temp=n;
    while (n!=0)
    {
        s = s*10 + n%10;
        n = n / 10;
    }
    if (temp==s)
        cout << 0;
    else cout << 1;
    return 0;
}