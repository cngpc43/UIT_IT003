/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);

//###INSERT CODE HERE -
void Nhapmang(int a[][MAX],int &n)
{
    cin >> n;
    // tao mang fibo voi MAX so
    int fibo[2*MAX+1];
    fibo[1]=1;
    fibo[2]=1;
    for (int i=3; i<=2*MAX+1 ;i++)
        fibo[i] = fibo[i-1] +fibo [i-2];
    // dua mang fibo vao ma tran
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            a[i][j] = fibo[i+j+1];
}
void Xuatmang(int a[][MAX], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}






int main()
{
    int n, a[MAX][MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);
	
    return 0;
}