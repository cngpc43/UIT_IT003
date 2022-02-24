/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>

using namespace std;

void input(int a[][1000], int m, int n)
{
    for (int i=0;i<m; i++)
        for (int j=0; j<n; j++)
            cin >> a[i][j];
}
void output(int a[][1000], int m, int n)
{
    for (int i=0;i<m; i++)
    {
        for (int j=0; j<n; j++)
            cout <<  a[i][j] << " ";
        cout << endl;
    }
}


void horizontal_invert(

//###INSERT CODE HERE -
int a[][1000], int m, int n)
{   
    for (int j=0; j<n; j++)
    {
        for (int i=0; i<m/2; i++)
        {
            int temp=a[i][j];
            a[i][j] = a[m-i-1][j];
            a[m-i-1][j] =  temp;
        }
    }




}

int main()
{
    int n, m;
    cin >> n >> m;

    
    int a[1000][1000];
    
    input(a, n, m); //Hàm này đã được code chuẩn không thể chỉnh, sinh viên không cần quan tâm
    output(a, n, m);
    horizontal_invert(a, n, m);

    output(a, n, m);//Hàm này đã được code chuẩn không cần chỉnh, sinh viên không cần quan tâm
    
    return 0;
}
