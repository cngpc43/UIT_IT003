#include <iostream>

using namespace std;



int isSumOfConsecutive(int n)
{
    int dem=0,s;
    for (int i=1; i<=n; i++)
        {
            s=i;
            for (int j=i+1; j<=n; j++)
            {
                s+=j; 
                if (s==n) 
                {
                    dem++;
                    break;
                }
                if (s>n) break;   
            }
        }
    return dem;
}



int main()
{
    int n;cin>>n;
    cout <<isSumOfConsecutive(n)<< endl;
    return 0;
}