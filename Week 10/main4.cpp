/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

//###INSERT CODE HERE -
#include <iostream>
using namespace std;
const int MAXR = 1000;
const int MAXC = 1000;
void NhapMaTran(int a[][MAXC], int &n)
{
    cin >> n;
    for (int i=0; i<n; i++)
        for (int j=0;j<n; j++)
            cin >> a[i][j];
}
bool isMaTranDonVi(int a[][MAXC], int n)
{
    for (int i=0; i<n; i++)
        for (int j=0;j<n; j++)
        {
            if (a[i][j]!=0 && i!=j )
                return false;
            if (a[i][i]!=1)
                return false;
        }
    return true;
}


int main() {
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    std::cout <<  std::boolalpha << isMaTranDonVi(a, n);
    return 0;
}
