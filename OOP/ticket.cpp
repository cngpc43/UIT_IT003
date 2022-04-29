#include <iostream>
#include <string>
using namespace std;
class ticket
{
private:

    int price;
    int extra;
    char date [30];
public:
    int tinhtien(){
        return extra*20000+70000;
    }
    void Nhap(){
        cout<<"Nhap so tro choi them: "<<endl;
        cin>>extra;
        cout<<"Nhap ngay vao: "<<endl;
        cin.ignore();
        cin.getline(date,30);
    }
};


int main(){
    int n,t;
    cout<<"Nhap so ve: "<<endl;
    cin>>n;
    ticket *p=new ticket [n];
    for(int i=0;i<n;i++){
        p[i].Nhap();
    }
    for(int i=0;i<n;i++){
        t+=p[i].tinhtien();
    }
    cout<<"Tien cong vien thu duoc: "<<t;

}
