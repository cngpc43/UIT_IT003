#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double pi=0;
    for (int i=0; i<=n; i++)
        pi += (-pow(-1,i)/(2*i+1));
    cout << -4.0*pi;
    return 0; 
}