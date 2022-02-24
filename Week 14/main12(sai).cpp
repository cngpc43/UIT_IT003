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

void DemTieng(char s1[]);
int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void myMemmove(char s[], int vt, int k);
int myStrstr(char s[], char s1[]);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s[MAX];
	cin.getline(s, 299);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemTieng(s);
	return 0;
}

//###INSERT CODE HERE -
int myStrlen(char s[], int k)
{
	while (s[k] != '\0')
		k++;
	return k;
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
int myStrstr(char s1[],char s2[])
{
    int l1=myStrlen(s1,0);
    int l2=myStrlen(s2,0);
    bool check;
    for(int i=0;i<l2;i++)
        if(s2[i]==s1[0])
        {
            check = true;
            for(int index1=0, index2= i; index1<l1 ; index1++, index2++)
                if(s1[index1]!=s2[index2])
                {
                    check = false;
                    break;
                }
            if(check==true)
                return i;
        }
    return -1;
}
void mySubstr(char s[], int b, int count, char ss[])
{
    for (int i=b, num=0; num<count; i++, num++)
    {
        ss[num]=s[i];
    }
    ss[count]='\0';
}
void myMemmove(char s[], int vt, int k)
{
    int n=myStrlen(s,0);
    for(int i=vt; i<n-k ;i++)
        s[i]=s[i+k];
    s[n-k]='\0';
}
void DemTieng(char s[])
{
    char temp[MAX];
    for (int i=0; i<myStrlen(s,0); i++)
        if (s[i]==' ')
        {
            int dem=0; 
            mySubstr(s,0,i,temp);
            while (myStrstr(temp,s)!=-1 )
            {
                dem++;
                cout <<temp<< ","<< s << "-" ;
                myMemmove(s,myStrstr(temp,s),myStrlen(temp,0)+1);
                cout << s << myStrlen(s,0) << " " << i <<endl;
            }
            cout << temp << ": " << dem << endl;
        }
    
        
}