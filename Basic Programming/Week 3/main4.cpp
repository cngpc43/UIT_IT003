#include <iostream>

using namespace std;

int main()
{
    int temperature;
    cout<<"What is the outdoor temperature? ";
    cin>>temperature;
    cout<<endl;

    cout << "What is your plan today? " << endl;
    if (temperature>=33)
        cout <<"Good day for swimming" << endl;
    else if (temperature>=24)
        cout << "Good day for golfing" << endl;
    else if (temperature>=10)
        cout << "Good day to play tennis" << endl;
    else cout << "Go to bed";


    return 0;
}