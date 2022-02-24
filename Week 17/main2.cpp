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

//###INSERT CODE HERE -
void listWord(char s[])
{
    int n=strlen(s), index=0;;
    s[n]=' ';
    s[n+1] = '\0';
    n++;
    for (int i=0;i<n; i++)
        if (s[i]==' ')
        {
            for (int j=index; j<i; j++)
                cout << s[j];
            cout << endl;
            index=i+1;
        }
}




int main()
{

   char str[100];
   cin.getline(str,100);
   listWord(str);

   return 0;
}
