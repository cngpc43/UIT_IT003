

#include <iostream>
#include <cstring>
using namespace std;

int countBlankSpace(char str[])
{
    int dem=0;
    for (int i=0; i<strlen(str); i++)
        if (str[i]==' ')
            dem++;
    return dem;
}
void countUpperLower(char str[])
{
    int demhoa=0, demthuong=0;
    for (int i=0; i<strlen(str); i++)
    {
        if (str[i]>='a' && str[i]<='z')
            demthuong++;
        if (str[i]>='A' && str[i]<='Z')
            demhoa++;
    }
    cout << "\nSo ky tu hoa: " << demhoa << endl;
    cout << "So ky tu thuong: " << demthuong << endl;
}


int main()
{

   char str[100], str1[100];
   cin.getline(str,100);
   cout<<"Chuoi: "<<str;
   cout<<"\nSo ky tu khoang trang: "<<countBlankSpace(str);
   countUpperLower(str);



   return 0;
}
