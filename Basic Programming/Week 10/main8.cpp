#include <iostream>
#include <iomanip>
using namespace std;
const int  maxn=100;

void inputArray(float a[][maxn],int &ma,int &na)
{
    cin >> ma >> na;
    for (int i=0; i<ma; i++)
        for (int j=0; j< na; j++)
            cin >> a[i][j] ;
}
void x_Array(float a[][maxn], int ma, int na, float b[][maxn],int mb, int nb, float c[][maxn], int &mc, int &nc)
{
    for(int i=0;i<ma;++i)
        for(int j=0;j<nb;++j)
        {
            c[i][j]=0;
            for(int k=0;k<na;++k)
            c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
        }  
    mc = ma ; nc = nb;
}
void outputArray(float a[][maxn],int ma, int na)
{
    for (int i=0; i<ma; i++)
    {
        for (int j=0; j< na; j++)
            cout <<a[i][j] << " ";
        cout << "\n";
    }
}
int main()
{
    float a[maxn][maxn], b[maxn][maxn] ,c[maxn][maxn];
    int  na, ma,mb,nb,mc,nc;
    inputArray(a,ma,na);
    inputArray(b,mb,nb);
    x_Array(a,ma,na,b,mb,nb,c,mc,nc);
    outputArray(c,mc,nc);
    return 0;
}