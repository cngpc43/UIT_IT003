#include <iostream>
using namespace std;

void tamGiacVuong_3()
{



    int n;
    cin >> n;
    if (n>=3 && n<=10)
    {
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<= n-i; j++)
                cout << "  ";
            for (int j=1; j<= i; j++)
                cout << "* ";
            cout << endl;
        }
        return ;
    }
    cout << "Khong thoa dieu kien nhap.";



}
int main()
{

    tamGiacVuong_3();
    return 0;
}