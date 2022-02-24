#include <iostream>
using namespace std;

int main()
{
    int con,chan;
    cin >> con >> chan;
    for (int i=0; i<=con; i++)
        if (2*i+4*(con-i)==chan)
                cout << i << " " << con-i;
    return 0;
}