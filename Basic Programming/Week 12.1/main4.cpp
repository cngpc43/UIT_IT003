#include <iostream>
#include <cstring>
using namespace std;



void properNounCorrection(char str[])
{
    for (int i=0; i<strlen(str); i++)
        str[i]=tolower(str[i]);
    str[0]=toupper(str[0]);
    for (int i=1; i<strlen(str)-1; i++)
        if (str[i]==' ')
            str[i+1]=toupper(str[i+1]);
}




int main()
{

   char str[100], str1[100];
   cin.getline(str,100);
   cout<<"Chuoi ban dau: "<<str;
   cout<<"\nChuoi sau khi chuan hoa: ";
   properNounCorrection(str);
   cout<<str;

   return 0;
}
