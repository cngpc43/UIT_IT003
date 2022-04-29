#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int year;
    cin >> year;
    if (year>=1)
        switch ((year%12))
        {
            case 0: 
                cout << "THAN"; break;
            case 1:
                cout << "DAU"; break;
            case 2:
                cout << "TUAN"; break;
            case 3:
                cout << "HOI"; break;
            case 4:
                cout << "TY'"; break;
            case 5:
                cout << "SUU"; break;
            case 6:
                cout << "DAN"; break;
            case 7:
                cout << "MEO"; break;
            case 8:
                cout << "THIN"; break;
            case 9:
                cout << "TY."; break;
            case 10:
                cout << "NGO"; break;
            case 11:
                cout << "MUI"; break;
        }
    else
        switch ((-year%12))
        {
            case 0: 
                cout << "DAU"; break;
            case 1:
                cout << "THAN"; break;
            case 2:
                cout << "MUI"; break;
            case 3:
                cout << "NGO"; break;
            case 4:
                cout << "TY."; break;
            case 5:
                cout << "THIN"; break;
            case 6:
                cout << "MEO"; break;
            case 7:
                cout << "DAN"; break;
            case 8:
                cout << "SUU"; break;
            case 9:
                cout << "TY'"; break;
            case 10:
                cout << "HOI"; break;
            case 11:
                cout << "TUAT"; break;
        }

    return 0;
}