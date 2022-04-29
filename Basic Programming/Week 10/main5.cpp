#include <iostream>
using namespace std;
void NhapMaTran(double a[][100], int &m, int &n)
{
    cin >> m >> n;
    for (int i=0; i<m; i++)
        for (int j=0;j<n; j++)
            cin >> a[i][j];
}
double tongduongcheo(double a[][100], int m, int n)
{
    double sum=0;
    for (int i=0; i<m; i++)
        sum+=a[i][i];
    return sum;
}
int main()
{
    double a[100][100];
    int m,n;
    NhapMaTran(a,m,n);
    cout << tongduongcheo(a,m,n);
    return 0;
}