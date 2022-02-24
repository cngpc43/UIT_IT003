#include<iostream>
#include<cstring>
using namespace std;

int countLetters(char s[])
{
    int dem=0;
    for (int i=0; i<strlen(s); i++)
        if (s[i]== 'W' || s[i]== 'w' || s[i]== 'f' ||s[i]== 'F' || s[i]== 'z' ||s[i]== 'Z' ||  
            s[i]== 'j' || s[i]== 'J'  )
                dem++;
    return dem;
}

int main()
{

   char s[256];
   cin.getline(s, 256);

   cout << countLetters(s) << endl;
    return 0;
}
