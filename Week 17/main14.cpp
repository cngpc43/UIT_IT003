#include <iostream>
using namespace std;
const int maxn=1000;

void inputMatrix(double  a[][maxn],int &ma,int &na)
{
    cin >> ma >> na;
    for (int i=0; i<ma; i++)
        for (int j=0; j< na; j++)
            cin >> a[i][j] ;
}
void inputVector(double a[], int &n)
{
    cin >> n;
    for (int i=0; i<n;i++)
        cin >> a[i];
}
void x_Array(double a[][maxn], int ma, int na, double b[],int mb)
{
    for(int i=0;i<ma;i++)
    {
        double x=0;
        for (int j=0; j<mb ; j++)
            x +=  a[i][j] * b[j];
        cout << x << endl;
    }
}
int main()
{
    double a[maxn][maxn], b[maxn];
    int  na, ma,mb;
    inputMatrix(a,ma,na);
    inputVector(b,mb);
    x_Array(a,ma,na,b,mb);
    return 0;
}