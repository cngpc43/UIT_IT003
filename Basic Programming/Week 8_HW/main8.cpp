#include <iostream>
#include <math.h>
using namespace std;

bool ngto(int n)
{
    for (int i=2 ; i<=n/2; i++)
      if (n % i==0)
        return false;
  return true;
}

int main()
{
  int n;
  long sum=1;
  cin >> n;
  for (int i=2; i<=n; i++)
    if (ngto(i)==true)
        sum*=i;
  cout << sum;
  return 0;
}