#include <iostream>
#include <string>
using namespace std;



void demkitu(string s, int dem[])
{
    for (int i=32; i<=126; i++)
        dem[i]=0;
    for (int i=0; i<s.size(); i++)
        dem[s[i]]++;
}


int main()
{

   string s1,s2;
   int dem1[130], dem2[130];
   getline(cin,s1);
   getline(cin,s2);
   demkitu(s1,dem1);
   demkitu(s2,dem2);
   for (int i=32; i<=126; i++)
    if (dem1[i] != dem2[i])
    {
        cout << "NO";
        return 0;
    }
   cout << "YES";
    
   return 0;
}
