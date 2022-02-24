#include <iostream>
#include <string>
using namespace std;

void xoa(string &str)
{
    while (str[0] == ' ')
		str.erase(0, 1);
    while (str[str.length() - 1] == ' ')
		str.erase(str.length() - 1, 1);
    int n=str.size();
    for (int i=0; i<n; i++)
        if (str[i]==' ' && str[i+1]==' ')
        {
            for (int j=i; j<n-1;j ++)
                str[j]=str[j+1];
            i--;
            str.erase(n-1,1);
            n--;
        }
}


int main ()
{
    string str;
    getline(cin,str);
    xoa(str);
    cout<< str;
    return 0;
}