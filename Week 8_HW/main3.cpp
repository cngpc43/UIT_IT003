#include <iostream>
#include <math.h>
using namespace std;

bool ngto(int n)
{
  if (n<2)
    return false;
  else 
    for (int i=2 ; i<=trunc(sqrt(n)); i++)
      if (n % i==0)
        return false;
  return true;
}

int main()
{
  int n,dem=0;
  cin >> n;
  for (int i=1; i<=n-2; i++)
    if (ngto(i)==true && ngto(i+2)==true)
      {
        cout << i << ", " << i+2 << endl;
        dem++;
      }
  cout << "Tong: "<< dem << " cap so sinh doi < " << n;
  return 0;
}