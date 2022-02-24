#include <iostream>


using namespace std;
void sort(int a[],int n)
{
    for (int i=1; i<=n-1; i++)
        for (int j=i+1; j<=n; j++)
            if (a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
}
int main()
{
    int arr[2000];
    int a,b;
    cin >> a >> b;
    for (int i=1; i<=a; i++)
        cin >> arr[i];
    for (int i=a+1; i<=a+b; i++)
        cin >> arr[i];
    sort(arr,a+b);
    for (int i=1; i<=a+b; i++)
        cout << arr[i] << endl;
    return 0;
}