#include <iostream>
using namespace std;

int main()
{
    int n,a,b,c;
    cin >> n;
    if ((n<100) || (n>999))
        cout << "NULL";
    else 
    {   //chỉ dùng cái đã học
        a= n/100;
        b= (n/10)%10;
        c=n%10;

        if (a==1)
           cout << "mot ";
        else if (a==2)
               cout << "hai ";
        else if (a==3)
           cout << "ba ";
        else if (a==4)
            cout << "bon ";
        else if (a==5)
            cout << "nam ";
        else if (a==6)
            cout << "sau ";
        else if (a==7)
            cout << "bay ";
        else if (a==8)
            cout << "tam ";
        else if (a==9)
            cout << "chin ";
        cout << "tram";

        if (b==0 && c!=0)
            cout << " le";
        else if (b==1)
                cout << " muoi";
        else if (b==2)
                cout << " hai muoi";
        else if (b==3)
                cout << " ba muoi";
        else if (b==4)
                cout << " bon muoi";
        else if (b==5)
                cout << " nam muoi";
        else if (b==6)
                cout << " sau muoi";
        else if (b==7)
                cout << " bay muoi";
        else if (b==8)
                cout << " tam muoi";
        else if (b==9)
                cout << " chin muoi";

         if (c==1)
            cout << " mot";
        else if (c==2)
            cout << " hai";
        else if (c==3)
            cout << " ba";
        else if (c==4)
            cout << " bon";
        else 
            if (b==0 && c==5 )
                cout << " nam";
            else if (b!=0&&c==5)
                cout << " lam";
        else if (c==6)
            cout << " sau";
        else if (c==7)
            cout << " bay";
        else if (c==8)
            cout << " tam";
        else if (c==9)
            cout << " chin";
    }

    return 0;
}