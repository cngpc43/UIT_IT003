/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
string
###End banned keyword*/

#include <iostream>
#include <cstring>
using namespace std;

void properNounCorrection(char str[])
{
    for (int i=0; i<strlen(str); i++)
        str[i]=tolower(str[i]);
    str[0]=toupper(str[0]);
}


int main ()
{
    char s[100];
    cin.getline(s, 35);
    properNounCorrection(s);
    cout<< s;
    return 0;
}
