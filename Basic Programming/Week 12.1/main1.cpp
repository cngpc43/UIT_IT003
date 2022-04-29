#include <iostream>
#include <cstring>
using namespace std;



void encloseInBrackets(char a[])
{
    cout << "(";
    strcat(a,")");
}



int main ()
{
    char a[100];
    cin.getline(a,40);
    encloseInBrackets(a);
    cout<<a;
    return 0;
}
