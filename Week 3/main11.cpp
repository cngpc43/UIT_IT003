#include <iostream>
using namespace std;

int main()
{
    int month, year, day=0;
    cin >> month >> year;

    if (month==12 || month== 1 || month==3 || month==5 || month==7 || month==8  || month==10)
        day = 31;
    else if ( month==4 || month==6 || month==9 || month ==11)
        day = 30;
    else if(month==2)
        if((year%4==0 && year%100!=0) || (year%400==0))
            day = 29;
        else day = 28;
    
    if(day==0 && (year<=1975 || year >= 2019))
    {
        cout <<"Thang khong hop le.Nam khong hop le.";
        return 0;
    }
    if (day==0)
    {
        cout <<"Thang khong hop le.";
        return 0;
    }
    if (year<=1975||year>=2019)
        cout << "Nam khong hop le.";
    else cout << day;
    return 0;
}