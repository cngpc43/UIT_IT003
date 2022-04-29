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

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);


int main()
{
	char s[MAX];
	cin.getline(s, 299);

	char s1[MAX];
	myStrcpy(s1, 0, s, 0);
	
// 	cout << myStrlen(s,0) << " " << myStrlen(s1,0) << endl;
	
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
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
void Chuanhoa(char str[])
{
    int n=myStrlen(str,0);
    while (str[0] == ' '){
		for(int i=0;i<n-1;i++)
            str[i]=str[i+1];
	    str[n-1]='\0'; 
    }
    while (str[n - 1] == ' '){
		str[n-1]='\0';
		n--;
    }
    for (int i=0; i<n; i++)
        if (str[i]==' ' && str[i+1]==' ')
        {
            for(int j=i;j<n;j++)
                str[j]=str[j+1];
	        str[n-1]='\0'; 
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
void myStrcpy(char s1[], int vt , char s[], int k){
    for (int i=vt, j=k; j<myStrlen(s,0); i++, j++)
        s1[i]=s[j];
    s1[myStrlen(s,0)]='\0';
}