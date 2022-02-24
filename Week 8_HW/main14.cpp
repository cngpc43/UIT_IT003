#include <iostream>
#include <math.h>

using namespace std;


int isPower(int n)
{
    if (n==1)
        return 1;
    for (int i=2; i<n; i++)
    {
        int x=0;
        for (int j=2; j<n; j++)
            if (round(pow(i,j))==n)
                return 1;
    }
    return 0;
}



int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int n;cin>>n;
    cout << isPower(n)<< endl;
    return 0;
}