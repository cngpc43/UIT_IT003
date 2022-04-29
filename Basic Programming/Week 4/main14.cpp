#include <iostream>
using namespace std;

int main()
{
    int min1, min2_10, min11, fee, result=0;
    cin >> min1 >> min2_10 >> min11 >> fee;
    if (fee>=min1)
    {
        result ++;
        fee-=min1;
    }
    if (fee<=9*min2_10)
    {
        result+= fee/min2_10;
        fee=0;
    }
    else 
    {
        result+=9;
        fee-=9*min2_10;
    }
    result += fee/min11;
    cout << result ;
    return 0;
}