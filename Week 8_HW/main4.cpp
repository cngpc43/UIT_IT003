

#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()
{
	int x;
	cin >> x;
	if (x < 1 || x>30)
		cout << "So " << x << " khong nam trong khoang [1,30]." << endl;
	else
	{
		cout << Fibo(x) << endl;
	}
	return 0;
}

int Fibo(int x)
{
  
  int a[MAX];
  a[1]=1; a[2]=1;
  for (int i=3; i<=x;i++)
    a[i]=a[i-1]+a[i-2];
  return a[x];
}
