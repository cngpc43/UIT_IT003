#include <iostream>
using namespace std;

char courseGrade(int score)
{
    switch(
        
        
        score)
    {
        case 90 ... 100:
            return 'A';
        case 80 ... 89:
            return 'B';
        case 70 ... 79:
            return 'C';
        case 60 ... 69:
            return 'D';
        case 0 ... 59:
            return 'F';
    }      
}
int main()
{
    int score;
    cin >> score;
    cout << courseGrade(score);
    return 0;
}


