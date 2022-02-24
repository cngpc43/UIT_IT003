/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
###End banned keyword*/

#include <iostream>
#include <string>
using namespace std;

//###INSERT CODE HERE -
string toupper_String(string a)
{
    for (int i=0; i<a.size(); i++)
        a[i] = toupper(a[i]);
    return a;
}
bool Palindrome(string a)
{
    for (int i=0; i<a.size()/2; i++)
        if (a[i] != a[a.size()-i-1])
            return false;
    return true;
}
bool isCaseInsensitivePalindrome(string a)
{
    string temp = toupper_String(a);
    return Palindrome(temp);
}





int main ()
{
    string a;
    getline(cin,a);
    cout<< isCaseInsensitivePalindrome(a);
    return 0;
}
