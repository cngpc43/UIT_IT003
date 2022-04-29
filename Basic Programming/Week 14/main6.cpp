/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
###End banned keyword*/

#include <iostream>
using namespace std;

//###INSERT CODE HERE -
bool isRepeat(string s)
{
    if (s.size()%2!=0)
        return false;
    for (int i=0; i<s.size()/2; i++)
        if (s[i]!=s[s.size()/2+i])
            return false;
    return true;
}




int main ()
{
    string inputString;
    getline(cin,inputString);
    cout<< isRepeat(inputString) ;
    return 0;
}
