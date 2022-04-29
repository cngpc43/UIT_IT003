#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if (b>=0)
        cout << "Phuong trinh "<< a << "x+" << b << "=0 ";
    else cout << "Phuong trinh "<< a << "x" << b << "=0 ";
    if (a == 0 && b == 0)
        cout << "co vo so nghiem";
    else if (a == 0)
        cout << "vo nghiem";
    else
        cout << "co 1 nghiem x = " << (double)(-b) / a;
    return 0;
}