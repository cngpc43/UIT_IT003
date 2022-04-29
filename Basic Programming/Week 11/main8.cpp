#include <iostream>
using namespace std;

void input(int a[], int &n,int &max, int &min)
{
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        if (a[i]>max) max = a[i];
        if (a[i]<min) min = a[i];
    }
}

void process(int a[], int n, int max, int min)
{
    if (max-min-n+1>0) 
        cout << max-min-n+1 ;
    else cout << 0;
}
int main()
{
    int n, a[100],min=100, max =-100;
    input(a,n,max,min);
    process(a,n,max,min);
    return 0;
}