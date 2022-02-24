/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
string
###End banned keyword*/

#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

struct DATE
{
    int day, month, year;
};
typedef struct STUDENT
{
    char id[11];
    char name[35];
    DATE dob;
    float math, phy, chem, aver;

} SV;

//###INSERT CODE HERE -
void inputArrayStudents(SV a[], int &n)
{
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin.ignore();
        cin.getline(a[i].id,11);
        cin.getline(a[i].name,35);
        cin >> a[i].dob.day >> a[i].dob.month >> a[i].dob.year;
        cin >> a[i].math >>  a[i].phy >>  a[i].chem ;
        a[i].aver = (a[i].math +  a[i].phy +  a[i].chem )/3;
    }
}
SV maxAverageScore(SV a[], int n)
{
    SV max;
    for (int i=0; i< n; i++)
        if (a[i].aver>max.aver)
            max = a[i];
    return max;
}
void outputStudent(SV max)
{
    
    cout << max.id << "\t|";
    cout << max.name << "\t|";
    cout << max.dob.day << '/' << max.dob.month <<'/' << max.dob.year <<"\t|";
    cout << max.math << "\t|" << max.phy << "\t|" <<  max.chem << "\t|" << max.aver;
    cout << endl;
        
}




int main()
{
    STUDENT a[100];
    int n,i;
    char name[35];

    inputArrayStudents(a,n);


    cout<<"\nThe student with the highest average score:\n ";
    cout<<"ID\t|Fullname\t|Date of birth\t|Maths\t|Phys\t|Chemis\t|Average score\n";
    outputStudent(maxAverageScore(a,n));


    return 0;
}

