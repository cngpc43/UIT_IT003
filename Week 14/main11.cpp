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

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX],s1[]="";
	cin.getline(s, 299);
	if (myStrcmp(s, s1) == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}

//###INSERT CODE HERE -
int myStrcmp(char s1[MAX], const char s2[MAX])
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
void DemKyTu(char s[])
{
    int n=myStrlen(s,0);
    bool ktra[n];
    for (int i=0; i<n; i++)
        ktra[i]=true;
        
    for (int i=0; i<n; i++)
        if (ktra[i]==true)
        {
            int dem=0;
            for (int j=i; j<n;j++)
                if (s[i]==s[j] && ktra[j]==true)
                {
                    dem++;
                    ktra[j]=false;
                }
            cout <<(char)s[i] << ": " << dem << endl;
        }
}
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