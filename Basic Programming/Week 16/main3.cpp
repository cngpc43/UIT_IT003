
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
string
###End banned keyword*/

#include <iostream>
#include <time.h>
using namespace std;
#define MIN 0
#define MAX 1000

//SV can dinh nghia day du cac ham sau, viet xong ham nao thi nen kiem tra ham do xem da viet dung chua

/*---------------------------------------------------------------------
 Ham 1: Nhap 1 so nguyen >=0 va <=100000000, neu nhap sai thi nhap lai
 Input:   Message
 Output:  1 so nguyen >=0
 Yeu cau: Hien message truoc roi cho user nhap, neu nhap sai thi hien lai message va cho user nhap lai,
 message se duoc truyen vao tu loi goi ham trong ham main.
 Vi du: getInteger("Please enter a number in range 1 .. 100,000,000: ")
---------------------------------------------------------------------*/
int getInteger(char *message); // or (char message[])

/*---------------------------------------------------------------------
 Ham 2: Tao ngau nhien 1 so nguyen co gia tri trong pham vi tu a den b
 Input : 2 so nguyen a va b
 Output:  1 so nguyen thuoc [a,b]
 ---------------------------------------------------------------------*/
int random(int a, int b);

/*---------------------------------------------------------------------
 Ham 3: Tao 1 mang voi moi phan tu la 1 so nguyen ngau nhien trong pham vi [MIN, MAX], MIN MAX da dinh nghia o dau chuong trinh
 Input : mang a va 1 so nguyen n la so luong phan tu cua mang
 Output:  void
 ---------------------------------------------------------------------*/

void genArray(int a[], int n); // or (int *a, int n)

/*---------------------------------------------------------------------
 Ham 4: Xuat mang ra man hinh
 Input : mang a va 1 so nguyen n la so luong phan tu cua mang
 Output:  void
 Yeu cau: Hien chuoi "Array: ", sau do liet ke cac phan tu cua mang, viet cach nhau 1 khoang trang
 ---------------------------------------------------------------------*/
void printArray(int *a, int n); // or (int a[], int n)

/*---------------------------------------------------------------------
 Ham 5: Tim 1 phan tu trong mang
 Input : mang a va 1 so nguyen n la so luong phan tu cua mang
 Output:  void
 Yeu cau: Dong dau tien la chuoi "Enter an interger: ", sau do cho user nhap so.
 Neu tim thay thi xuat thong bao "The first index where "<<x<<" was found: ", va vi tri
 Neu khong tim thay thi xuat thong bao  x<<" was not found in the array"
 ---------------------------------------------------------------------*/
void findElement(int *a, int n); // or (int a[], int n)

/*---------------------------------------------------------------------
 Ham chinh: Main function
 Input:   NON
 Output:  int
---------------------------------------------------------------------*/
int main()
{
	srand((unsigned int)time(0)); //lien quan den viec tao so ngau nhien, SV tim hieu them ve ham rand()
    int n, choose, *a=NULL; //n la so luong phan tu mang, a la mang, choose la gia tri user chon trong MENU
    char answer; //ky tu user go vao de quyet dinh tiep tuc game hay dung lai, neu answer = y thi se tiep tuc
	int flag=0; //giup kiem tra xem mang da duoc nhap chua, neu mang chua duoc nhap thi khong the thuc hien yeu cau 2 va 3

    /* Chuong trinh cho phep user chon 1 thao tac muon thuc hien tu MENU, trả về kết quả cùng với thời gian thực hiện thao tac do
     Dau tien man hinh xuat hien MENU cho user lua chon thao tac, neu nhap 1 so khac voi cac so {1, 2, 3} se thoat game.
     1. Tao ngau nhien 1 mang:
     - Hien thong bao "Please enter a number in range 1 .. 100,000,000: "
     - user nhap n
     - neu nhap sai thi hien lai thong bao tren va user nhap lai
     - cho biet thoi gian hoan thanh thao tac nhap bang cach xuat thong bao "Time to create an array: " kem theo gia tri thoi gian
            clock_t start = clock(); //bam dong ho de bat dau tinh gio
            //goi ham thuc hien thao tac
            clock_t end = clock(); // dung dong ho
            cout<<"\nTime to create an array: "<<((double)end - start)/CLOCKS_PER_SEC<<" s"<<endl; //doi sang don vi giay

     2. Xuat mang da nhap:
     - neu mang chua nhap thi xuat thong bao "Please choose Option 1 to generate an array" va khong lam gi ca
     - neu da nhap mang roi thi in mang ra man hinh, xem lai yeu cau cua ham printArray
     - cho biet thoi gian hoan thanh thao tac xuat bang cach xuat thong bao "Time to print the array: " kem theo gia tri thoi gian

     3. Tim 1 phan tu trong mang
     - neu mang chua nhap thi xuat thong bao "Please choose Option 1 to generate an array" va khong lam gi ca
     - neu da nhap mang roi thi thuc hien thao tac tim, xem lai yeu cau cua ham findElement
     - cho biet thoi gian hoan thanh thao tac tim bang cach xuat thong bao "Time to find an element in the array: " kem theo gia tri thoi gian
     Neu user nhap 1 so nguyen khac {1,2,3} thi chuong trinh hien loi chao "See you again" va thoat game.

     Sau khi thuc hien xong 1 trong cac yeu cau {1,2,3} cua user thi chuong trinh se dua ra cau hoi "Do you want to continue(y/n): ".
     Neu user go 'y' thi chuong trinh hien lai MENU va tiep tuc game
     Neu user go vao bat ky ky tu nao khac 'y' thi chuong trinh hien loi chao "See you again" va thoat game.
     ---------------------------*/

	do
	{
        cout << "\n\nMENU: ";
		cout << "\n1.Generate an array";
		cout << "\n2.Print the array";
		cout << "\n3.Find an element in the array";
		//cout << "\n4.Delete duplicate elements in the array";
		cout << "\nOther.EXIT";

		cout << "\nPlease choose an option: ";
        
//###INSERT CODE HERE -
        cin >> choose;
        double start, end;
        switch (choose)
        {
            case 1:
            {
                char mess[]="Please enter a number in range 1 .. 100,000,000: ";
                char *p = mess;
                n = getInteger(p);
                
                a = new int[n];
                start = clock();
                genArray(a,n);
                end = clock();
                cout<<"\nTime to create an array: "<<((double)end - start)/CLOCKS_PER_SEC<<" s"<<endl;
                flag = 1;
                break;
            }
            case 2:
            {
                if (flag==0)
                {
                    cout << "\nPlease choose Option 1 to generate an array";
                    break;
                }
                start = clock();
                printArray(a,n);
                end = clock();
                cout<<"\nTime to print the array: "<<((double)end - start)/CLOCKS_PER_SEC<<" s"<<endl;
                break;
            }
            case 3:
            {
                if (flag==0)
                {
                    cout << "\nPlease choose Option 1 to generate an array";
                    break;
                }
                start = clock();
                findElement(a,n);
                end = clock();
                cout<<"\nTime to find an element in the array: "<<((double)end - start)/CLOCKS_PER_SEC<<" s"<<endl;
                break;
            }
            default:
            {
                cout << "\nSee you again";
                return 0;
            }
        }
        cout << "\nDo you want to continue(y/n): ";
            cin >> answer;
        if (answer=='n') 
            cout << "\nSee you again";
	}
    while (answer=='y');
    return 0;
}


int getInteger(char *message) // or (char message[])
{
    int n=-1;
    while (n<0 || n>100000000)
    {
        cout << "\n" <<message ;
        cin >> n;
    }
    return n;
}

int random(int a, int b)
{
    return (a + rand()%(b-a+1));
}
void genArray(int a[], int n) // or (int *a, int n)
{
    for (int i=0; i<n; i++)
        a[i]=random(MIN,MAX);
}
void printArray(int *a, int n)// or (int a[], int n)
{
    cout << "\nArray: ";
    for (int i=0;i<n; i++)
        cout << a[i] << " ";
}

void findElement(int *a, int n) // or (int a[], int n)
{
    int x;
    cout << "\nEnter an interger: ";
    cin >> x;
    for (int i=0;i<n; i++)
        if (a[i]==x)
        {
            cout << "\nThe first index where " << x << " was found: "  << i;
            return ;
        }
    cout << "\n" << x <<" was not found in the array";
}


