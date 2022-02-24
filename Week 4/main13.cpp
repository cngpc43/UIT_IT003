#include <iostream>
using namespace std;

int main()
{
    int goc;
    cin >> goc;
    goc=goc%360;
    if (goc>0 && goc <=90)
        cout << 4;
    else if (goc>90 && goc <=180)   
        cout << 3;
    else if (goc>180 && goc <=270)  
        cout << 2;
    else cout << 1;
    return 0;
}