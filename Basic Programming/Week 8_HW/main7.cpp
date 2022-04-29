
#include <iostream>
#include <cmath>
using namespace std;



bool ngto(int x)
{
    for (int j=2 ; j<=x/2; j++)
      if (x % j==0)
        return false;
  return true;
}
long sum_common_prime(int m, int n)
{
  
  long sum=0;
  for (int i=2; i<=((m>=n)?n:m)/2; i++)
    if ((m%i==0) && (n%i==0) && (ngto(i)==true))
      sum += i;
  if (((m>=n)?m:n)%((m>=n)?n:m)==0 && ngto((m>=n)?n:m))
    sum+=(m>=n)?n:m;
  if (sum==0)
    return -1;
  return sum;
}





int main() {
	int m, n;
	cin >> m >> n;
	cout << sum_common_prime(m, n);
}
