#include <iostream>
using namespace std;

//###INSERT CODE HERE -
void getScore(int &courseScore)
{
    cout << "Enter course score (0<=score<=100): ";
    cin >> courseScore;
    cout << "\nCourse score is " << courseScore << endl;
    cout << "Your grade for the course is " ;
}
void printGrade(int score)
{
    if (score>=90)
        cout << 'A';
    else if( score>=80)
        cout << 'B'; 
    else if( score >=70)
        cout << 'C'; 
    else if ( score>=60)
        cout << 'D'; 
    else
        cout << 'F'; 
}


int main()
{
    int courseScore;
    getScore(courseScore);
    printGrade(courseScore);
    return 0;
}