#include <iostream>
using namespace std;

int main()
{
    double w1,w2,v1,v2,max;
    cin >> v1 >> w1 >> v2 >> w2 >> max;
    if (w1+w2<=max)
        cout << v1+v2;
    else
        if (w1<=max && v1>=v2)
            cout << v1;
        else if (w2<=max && v2>=v1)
            cout << v2;
        if (w1<=max && w2> max && v2>=v1 )
            cout << v1;
        else if (w2<=max && w1 > max && v1>=v2)
            cout << v2;
        else if(w1>max && w2>max )
            cout << 0;
    return 0;
}