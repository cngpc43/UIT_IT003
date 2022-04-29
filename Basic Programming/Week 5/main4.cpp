#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch;
    cin >> n ;
    while (true)
    {   
        cin >> ch;
        if (ch=='X'||ch=='x')
            break;
        int i=0;
        while (i<n)
        {
            i++;
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}