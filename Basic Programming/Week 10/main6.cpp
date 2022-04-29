#include <iostream>
using namespace std;

void inputArr(double a[][100], int &m, int &n)
{
    cin >> m >> n;
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            cin >> a[i][j];
}
void outputArr(double a[][100], int m, int n)
{
    for (int i=0; i<n; i++)
    {    
        for (int j=0; j<m; j++)
            cout << a[j][i] << " ";
        cout << "\n";
    }
}
int main()
{
    double a[100][100];
    int m,n;
    inputArr(a,m,n);
    outputArr(a,m,n);
    return 0;
}