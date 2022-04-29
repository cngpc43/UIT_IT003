#include <iostream>



using namespace std;
int main()
{
    int dem1=0, dem4=0;
    int a[10];
    for (int i=0; i<10;i++)
        cin >> a[i];
    for (int i=0;i<10; i++)
    {
        int n=a[i];
        while (n>9)
            n/=10;
        if (n==1)
            dem1++;
        if (n==4)
            dem4++;
    }
    if (dem1==3 && dem4==1)
        cout << "TRUE";
    else 
        cout << "FALSE";
    return 0;
}
