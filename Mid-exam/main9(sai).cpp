#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int a[100], n;
    string s;
    cin >> n;
    for (int i=65; i<=90; i++)
        a[i]=0;
    cin.ignore();
    getline(cin,s);  
    for (int i=0; i<=s.size(); i++)
        if (s[i]!=' ')
            if (s[i] >= 'a' && s[i] <='z')
                a[s[i]-32]++;
            else a[s[i]]++;
    int dem=0;
    for (int i=65; i<=90;i++)
        if (a[i]!=0)
            dem++;
    cout << 26-dem;
    return 0;
}