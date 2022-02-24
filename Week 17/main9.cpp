/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
string
###End banned keyword*/

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

//###INSERT CODE HERE -
int myStrstr(char s1[],char s2[])
{
    int l1=strlen(s1);
    int l2=strlen(s2);
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
void viet_hoa_tat_ca(char str[])
{
    for (int i=0; i<strlen(str); i++)
        str[i]=toupper(str[i]);
}

int main()
{
    char a[10000][256];
    int len[10000];
    char key[100];
    int n=0; // lưu số lượng sách 
    for (int i=0; i<10000; i++)
    {
        char x[256];
        cin.getline(x,256); // đọc vào 1 chuỗi trung gian vì mảng 2 chiều không lưu đượcđược
        if (x[0]=='.' && strlen(x)==1)
            break;
        n++;
        len[i] = strlen(x); // mảg phụ để lưu độ dài các chuỗi 
        for (int j=0; j<strlen(x); j++)
            a[i][j]=x[j]; // chuyển vào mảng 2 chiều để lưu toàn bộ các chuỗi 
        
    }
    cin.getline(key,100);
    
    viet_hoa_tat_ca(key); // viết hoa lên để tìm mà không phân biệt thường hoa 
    
    for (int i=0; i<=n; i++)
    {
        char x[256];
        for (int j=0; j<len[i]; j++) // chuyển ngược lại vào mảng 1 chiều để xử lí
            x[j]=a[i][j];
        x[len[i]]='\0';
        
        viet_hoa_tat_ca(x); // viết hoa lên để tìm mà không phân biệt thường hoa 
        
        if (myStrstr(key,x)!=-1)
        {
            for (int j=0; j<len[i]; j++) // viết ra chuỗi ban đầu để đảm bảo đúng thường hoa :)))
                cout << a[i][j];
            cout << endl;
        }
    } 
    return 0;
}
