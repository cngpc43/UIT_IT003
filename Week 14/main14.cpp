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

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}

//###INSERT CODE HERE -
int myStrcmp(char s1[], char s2[])
{
    int n = 0;
	while (s1[n] != '\0' || s2[n] != '\0')
	{
		if (s1[n] > s2[n])
			return 1;
		else if (s1[n] < s2[n])
			return -1;
		n++;
	};
	return 0;
}
int myStrlen(char s[], int k)
{
	while (s[k] != '\0')
		k++;
	return k;
}
void myStrcpy(char s1[], int vt , char s[], int k){
    for (int i=vt, j=k; j<myStrlen(s,0); i++, j++)
        s1[i]=s[j];
    s1[myStrlen(s,0)]='\0';
}
void StringReverse(char s[])
{
    int n = myStrlen(s,0);
	int i, j = n-1, x=0;
	char kq[MAX];
	for(i = n-1; i >= 0; i--) 
	{
		if(s[i] == ' ') { 
			for(int pos = i+1; pos <= j; pos++) 
			{
			    kq[x]=s[pos];
			    x++;
			};
			j = i-1;
			kq[x]=' ';
			x++;
		}
		if(i == 0) 
			for(int pos = i; pos <= j; pos++) 
			{
			    kq[x]=s[pos];
			    x++;
			};
	}
	kq[x]='\0';
	myStrcpy(s,0,kq,0);
}
