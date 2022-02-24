#include <iostream>
using namespace std;

void inputArray(int a[], int &n1, int b[], int &n2)
{
    cin >> n1 >> n2;
    for (int i=0;i<n1; i++)
        cin >> a[i];
    for (int i=0;i<n2; i++)
        cin >> b[i];
}

int main()
{
    int a[100], b[100], n1,n2;
    inputArray(a,n1,b,n2);
    
    int max=-1000;
    for (int i=0; i<n1; i++)
        for (int j=0; j<n2; j++)
            if (a[i]+b[j]>=max && a[i] != b[j])
                max=a[i]+b[j];
    cout << max;
    return 0;
}