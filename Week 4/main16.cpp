#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double km, wait;
    bool way;
    int money=0;
    cin >> km >> way >> wait;
    if (km<=0|| (way !=0 && way!=1) || wait <0.0 )
    {
        cout << "Gia tri khong hop le";
        return 0;
    }
    if (km<=1)
    {
        money+=10000;  //nho hon 1
        km=0;
    }
    else 
    {
        money +=10000; //lon hon 1
        km--;
    }
    if(km<=29)
    {
        money+=km*13600;
        km=0;
    }
    else
    {   
        money+=13600*29;
        km-=29;
    }
    money += km*11000; 
    if (way==1) 
    {
        money=money*1.6 ;
        if (wait >=2) wait-=2; 
        else wait=0; 
    }
    if(wait > 0 )
        money+=wait*20000;
    cout << money << endl;
    return 0;
}