
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
string
###End banned keyword*/

#include<iostream>
#include<cstring>
using namespace std;

//###INSERT CODE HERE -
int countWords(char str[])
{
    int n=strlen(str);
    while (str[0] == ' ')
	{
	    for(int i=0;i<n;i++)
        str[i]=str[i+1];
	    str[n-1]='\0'; 
	    n--;
	}
    while (str[strlen(str) - 1] == ' ')
		str[strlen(str)-1]='\0';
    for (int i=0; i<n; i++)
        if (str[i]==' ' && str[i+1]==' ')
        {
            for(int j=i;j<n;j++)
            str[j]=str[j+1];
	        str[n-1]='\0'; 
            n--;
            i--;
        }
    // str[n]=' ';
    // str[n+1]= '\0';
    int dem=1;
    for (int i=0; i<strlen(str); i++)
        if (str[i]==' ')
            dem++;
    return dem;
}




int main()
{

   char s[256];
   cin.getline(s, 256);

   cout << countWords(s) << endl;
    return 0;
}
