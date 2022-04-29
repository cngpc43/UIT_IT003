#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char option;
    while (true)
    {
        cout << "MENU\n";
        cout << "t) Tao ra bang cuu chuong\n";
        cout << "d) Thoat chuong trinh\n";
        cout << "Moi ban lua chon: ";
        cin >> option; cout << endl;
        if (option=='t')
            {
                cout << "Moi ban nhap 1 so: ";
                int n; cin >> n; cout << endl;
                while (n<1 || n>9)
                {
                    cout << "Moi ban nhap 1 so tu 1 den 9: ";
                    cin >> n; cout << endl;
                }
                cout << "BANG CUU CHUONG: " << n << endl;
                for (int i=1; i<=n; i++)
                {
                    for (int j=1; j<=10; j++)
                        cout << setw(3) << i*j;
                    cout << endl;
                }
            }
        else if (option=='d')
            {
                cout << "Ban da chon thoat khoi chuong trinh. Cam on ban da su dung!";
                return 0 ;
            }
        else cout <<"Lua chon khong hop le" << endl;
    }
}