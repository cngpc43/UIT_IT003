/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
###End banned keyword*/

#include <iostream>
#include <string>

using namespace std;

string properNounCorrection(string str)
{
    for (int i=0; i<str.size(); i++)
        str[i]=tolower(str[i]);
    str[0]=toupper(str[0]);
    return str;
}

int main ()
{
    string a;
    getline(cin,a);
    cout<< properNounCorrection(a);
    return 0;
}
