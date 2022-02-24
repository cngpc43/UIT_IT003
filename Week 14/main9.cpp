/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
strlen
strcat
string
strcmp
strcpy
memmove
strstr
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt.
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]);

int main()
{
	char s[MAX];
	cin.getline(s, 299);	//Nhap chuoi s
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}

//###INSERT CODE HERE -
int myStrlen(char s[],int k)
{
	int n = 0;
	while (s[n] != '\0')
		n++;
	return n;
}
void Chuanhoa(char str[MAX])
{
    for (int i=0; i<myStrlen(str,0); i++)
        str[i]=tolower(str[i]);
    str[0]=toupper(str[0]);
    for (int i=1; i<myStrlen(str,0); i++)
        if (str[i]==' ')
            str[i+1]=toupper(str[i+1]);
    int n=myStrlen(str,0);
    while (str[0] == ' ')
	{
	    for(int i=0;i<n;i++)
        str[i]=str[i+1];
	    str[n-1]='\0'; 
	    n--;
	}
    while (str[myStrlen(str,0) - 1] == ' ')
		str[myStrlen(str,0)-1]='\0';
    for (int i=0; i<n; i++)
        if (str[i]==' ' && str[i+1]==' ')
        {
            for(int j=i;j<n;j++)
            str[j]=str[j+1];
	        str[n-1]='\0'; 
            n--;
            i--;
        }
}