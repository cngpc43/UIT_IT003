/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string *s = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    string a;
    cin >> a;
    for (int i = 0; i < n; i++)
    {
        if (a == s[i])
            cout << i;
    }
}
//###INSERT CODE HERE -
