#include <iostream>
using namespace std;

int main()
{
    int  n, sum = 0;
    cin >> n;
    int i=n;
    while(i>1)
    {
        i--;
        if (n%i==0) 
            sum= sum+i;
    }
    cout << sum;
    return 0;
}