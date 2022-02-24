#include <iostream>
using namespace std;

//###INSERT CODE HERE -
long sum_all_square(int n)
{
    long sum=0;
    for (int i=1; i<=n; i++)
        if ((i*i<=n) && (n%(i*i)==0))
            sum+=i*i;
    return sum;
}


int main() {
    int n;
    cin>>n;
    cout << sum_all_square(n);
}