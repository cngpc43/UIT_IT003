#include <iostream>
#include <string>
using namespace std;

void demkitu(string s, int dem[]) //  đếm số lượng các phần tử của s và lưu theo dạng bảng chữ cái 
{
    for (int i=32; i<=126; i++)
        dem[i]=0;
    for (int i=0; i<s.size(); i++)
        dem[s[i]]++;
}
bool ktra(int dem1[], int dem2[]) // kiểm tra xem 2 mảng đếm số lượng có bằng nhau không 
{
    for (int i=32; i<=126; i++)
        if (dem1[i] != dem2[i])
            return false;
   return true;
}

int main()
{

    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int dem1[130];
    demkitu(s2,dem1);
    for (int i=0;i<s1.size(); i++)  // duyệt mảng để tìm xâu con 
    {
        string x=s1.substr(i,s2.size());
        int dem2[130];
        demkitu(x,dem2);
        if (ktra(dem1,dem2) == true)
            cout << x << endl;
    }

   
    
   return 0;
}
