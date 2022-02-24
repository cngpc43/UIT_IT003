#include <iostream>
#include <cstring>
using namespace std;

void xuli(char str[])
{
    for (int i=0; i<strlen(str); i++)
        if (str[i]>=65 && str[i] <=90)
            str[i]+=32;
        else if (str[i]>=97 && str[i] <=122)
            str[i]-=32;
}

int main()
{

   char str[10000];
   cin.getline(str,10000);
   xuli(str);
   cout<<str;
   return 0;
}
