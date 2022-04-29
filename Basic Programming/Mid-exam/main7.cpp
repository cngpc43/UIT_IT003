
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <math.h>

using namespace std;

//###INSERT CODE HERE -
void inputMatrix(int a[][100], int &m, int &n)
{
    cin >> m >> n;
    for (int i=0;i<m; i++)
        for (int j=0; j<n; j++)
            cin >> a[i][j];
}
int findRow(int a[][100], int m, int n)
{
    for (int i=0; i<m; i++)
    {
        int dem=0;
        for (int j=0; j<n; j++)
            if (a[i][j]==1)
                dem++;
        if (dem==n)
            return i;
    }
    return -1;
}




int main()
{
	int a[100][100],n,m;
	inputMatrix(a, n,m);

	cout<<findRow(a,n,m);

	return 0;
}
