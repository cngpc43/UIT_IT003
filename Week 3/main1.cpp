#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter an integer: ";
    cin>>number;
    cout<<endl;

    int temp=number;
    if (number < 0)     
        number=-temp;
    cout << "The absolute value of "<< temp << " is " << number;

    return 0;
}