/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
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
void Chuanhoa(char str[])
{
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
    
    for (int i=0; i<n; i++)
        if (str[i]==' ' && str[i+1]=='.')
        {
            for (int j=i; j<n;j ++)
                str[j]=str[j+1];
            i--;
            str[n]='\0';
            n--;
        }
    for (int i=0; i<n-1; i++)
        if (str[i]=='.' && str[i+1]!=' ')
        {
            for (int j=n-1; j>i; j--)
                str[j+1]=str[j];
            str[i+1]=' ';
            str[n+1]='\0';
            n++;
        }
}






int main()
{
	char s[MAX];
	cin.getline(s, 299);

	char s1[MAX];
	strcpy(s1, s);
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
	return 0;
}

