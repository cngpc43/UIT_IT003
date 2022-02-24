#include <iostream>

using namespace std;


int sumMany(int m);
int main()
{
    int n;
    cin>>n; //So luong cac so nguyen can nhap


    cout << sumMany(n);
    return 0;
}
int sumMany(int m)
{
    int sum=0;
    for (int i=1; i<=m ; i++)
    {
        int x;
        cin >> x;
        sum=sum+x;
    }
    return sum;
}