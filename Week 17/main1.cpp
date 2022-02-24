/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
string
###End banned keyword*/

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

//###INSERT CODE HERE -
void xoa(char s[],int vitrixoa)
{
	int n=strlen(s);
    for(int i=vitrixoa;i<n;i++)
        s[i]=s[i+1];
	s[n-1]='\0'; 
}
int main()
{
    char str[500];
    cin.getline(str,500);
    
    while (str[0] == ' ')
		xoa(str,0);
    while (str[strlen(str) - 1] == ' ')
		str[strlen(str)-1]='\0';
	int n=strlen(str);
    for (int i=0; i<n; i++)
        if (str[i]==' ' && str[i+1]==' ')
        {
            xoa(str,i);
            n--;
            i--;
        }
    for (int i=0; i<strlen(str); i++)
        str[i]=tolower(str[i]);
    str[0]=toupper(str[0]);
    for (int i=1; i<strlen(str)-1; i++)
        if (str[i]==' ')
            str[i+1]=toupper(str[i+1]);
    cout << str;
    return 0;
}

