#include<iostream>
#include<string>
using namespace std;

struct PROVINCE
{
    int id;
    string name;
    int pop;
    float area;
};
void inputArrayProvinces(PROVINCE a[], int &n, string &tu)
{
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a[i].id;
        cin.ignore();
        getline(cin,a[i].name);
        cin >> a[i].pop >> a[i].area;
    }
    cin >> tu;
    
}
void outputProvincesMore1MillionPop(PROVINCE a[], int n, string tu)
{
    int max=0;
    for (int i=0; i<n; i++)
        if (a[i].area>a[max].area)   
            max=i;
    
    if (tu ==  a[max].name.substr(a[max].name.rfind(' ')+1 , a[max].name.size()-a[max].name.rfind(' ')-1))
        cout << "YES" ;
    else cout << "NO";
}


int main()
{
    PROVINCE a[100];
    int n; string tu;
    inputArrayProvinces(a,n,tu);
    outputProvincesMore1MillionPop(a,n,tu);
    return 0;
}