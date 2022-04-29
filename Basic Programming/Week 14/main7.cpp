/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
string
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

//###INSERT CODE HERE -
void xoa(char s[],int vitrixoa)
{
	int n=strlen(s);
    for(int i=vitrixoa;i<n;i++)
        s[i]=s[i+1];
	s[n-1]='\0'; 
}
void Chuanhoa(char str[MAX])
{
    for (int i=0; i<strlen(str); i++)
        str[i]=tolower(str[i]);
    str[0]=toupper(str[0]);
    for (int i=1; i<strlen(str); i++)
        if (str[i]==' ')
            str[i+1]=toupper(str[i+1]);
    
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
}





int main()
{
	char s[MAX];
	cin.getline(s, 299);
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}



