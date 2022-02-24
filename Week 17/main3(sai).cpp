#include <iostream>
#include <cstring>
using namespace std;

int myStrchar(char s1,char s2[]) // tìm vị trí xuất hiện đầu tiên của s1 trong chuỗi s2[]
{
    int l2=strlen(s2);
    for(int i=0;i<l2;i++)
        if(s2[i]==s1)
            return i;
    return -1;
}
void xoa(char s[],int vitrixoa)
{
	int n=strlen(s);
    for(int i=vitrixoa;i<n;i++)
        s[i]=s[i+1];
	s[n-1]='\0'; 
}
void listWord(char s[], char dau[])
{
    int n=strlen(s), index=0;
    // chuyển tất cả các vị trí ngắt câu về 1 dấu nhất định
    for (int i=0;i<n; i++)
        if (myStrchar(s[i],dau)!=-1 )
            s[i]= ' ';
    // xóa các khoảng trắng thừa 
    while (s[0] == ' ')
		xoa(s,0);
    while (s[strlen(s) - 1] == ' ')
		s[strlen(s)-1]='\0';
	n=strlen(s);
    for (int i=0; i<n; i++)
        if (s[i]==' ' && s[i+1]==' ')
        {
            xoa(s,i);
            n--;
            i--;
        }
    
    // làm tương tự bài 2, ngắt dấu câu theo dấu cố định đã chọn 
    s[n]=' ';
    s[n+1] = '\0';
    n++;
    for (int i=0;i<n; i++)
        if (s[i]==' ')
        {
            for (int j=index; j<i; j++)
                cout << s[j];
            cout << endl;
            index=i+1;
        }
}




int main()
{

   char str[1000], dau[20];
   cin.getline(str,1000);
   cin.getline(dau,20);
   listWord(str,dau);

   return 0;
}
