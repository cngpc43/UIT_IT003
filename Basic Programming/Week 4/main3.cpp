#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char ch1,ch2;
    int x;
    cin >> ch1 >> ch2 >> x;
    cout << "Ma ASCII cua ky tu `"<< ch1 << "\', `" << ch2 << "\' lan luot la " << (int)ch1 <<" va " << (int)ch2 << endl;
    cout << "Khoang cach giua hai ky tu `"<< ch1 << "\', `" << ch2 << "\' la " << abs((int)ch1-(int)ch2) << endl;
    cout << "Dang viet hoa cua ky tu `"<< ch1 << "\' la `" << (char)((int)ch1-32) << "\'"<< endl;
    cout << x << " la ma ASCII cua ky tu `" << (char)x << "\'";
    return 0;
}