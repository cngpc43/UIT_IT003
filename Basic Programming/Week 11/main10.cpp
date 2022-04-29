#include <iostream>
using namespace std;

void process (int arrA[], int a, int arrB[], int b)
{
    for (int i=0; i< a; i++)
    {
        for (int j=0; j<b; j++)
            if (arrA[i]==arrB[j])
                goto x;
        cout << arrA[i] << " ";
        x:  ;
    }
}
int main()
{
    int a , b , arrA[1000], arrB[1000];
    cin >> a >> b;
    for (int i=0; i<a; i++)
        cin >> arrA[i];
    for (int i=0; i<b; i++)
        cin >> arrB[i];
    cout << endl;
    process(arrA,a,arrB,b);
    return 0;
}