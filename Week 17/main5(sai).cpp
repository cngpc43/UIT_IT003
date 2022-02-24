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
	int n = 0;
	while (s[n] != '\0')
		n++;
	return n;
}
void StringReverse(char s[])
{
    if (myStrlen(s,0)==1)
        return ;
    int n=myStrlen(s,0),index=0,Num=0;
    s[n]=' ';s[n+1]='\0'; n++;
    char x[MAX];
    for (int i=0; i<n; i++)
        if (s[i]==' ')
        {
            for (int j=i-1; j>=index; j--)
            {
                x[Num]=s[j];
                Num++;
            }    
            x[Num]=s[i];
            Num++;
            index=i+1;
        }
    s[n-1]='\0';
    myStrcpy(s,0,x,0);
}
void myStrcpy(char s1[], int vt , char s[], int k){
    for (int i=vt, j=k; j<myStrlen(s,0); i++, j++)
        s1[i]=s[j];
    s1[myStrlen(s,0)]='\0';
}