#include <iostream>
using namespace std;
int main()
{
    int sum1=1,sum2=0, k;
    cin >> k;
    int i=1;
    while (i<k)
    {   
        i++;
        if (i%2==1)
            sum1 += i*i;
        if (i%2==0)
            sum2 += i*i;
    }
    cout << sum2-sum1;
    return 0;
}