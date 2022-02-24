#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double s1=0,s2=0,s3=0;
    double gt=1;
    double mauso=0;
    for (int i=1; i<=n; i++)
    {
        s1=s1+pow(i,i);
        gt=gt*i;
        s2=s2+gt;
  
        mauso=mauso+i;
        s3=s3+1/mauso;
    }
    cout << s1 << endl << s2 << endl << s3;
    
    return 0; 
}