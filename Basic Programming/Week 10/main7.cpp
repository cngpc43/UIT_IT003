#include <iostream>
using namespace std;
const int  maxn=100;

void inputArray(float a[][maxn],int &ma,int &na)
{
    cin >> ma >> na;
    for (int i=0; i<ma; i++)
        for (int j=0; j< na; j++)
            cin >> a[i][j] ;
}
void sumArray(float a[][maxn], float b[][maxn], int ma, int na, float c[][maxn])
{
    for (int i=0; i<ma; i++)
        for (int j=0; j< na; j++)
            c[i][j] = a[i][j] + b[i][j];  
}
void outputArray(float a[][maxn],int ma, int na)
{
    for (int i=0; i<ma; i++)
    {
        for (int j=0; j< na; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}
int main()
{
    float a[maxn][maxn], b[maxn][maxn] ,c[maxn][maxn];
    int  na, ma;
    inputArray(a,ma,na);
    inputArray(b,ma,na);
    sumArray(a,b,ma,na,c);
    outputArray(c,ma,na);
    return 0;
}