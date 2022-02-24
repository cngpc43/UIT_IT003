

#include <iostream>

using namespace std;
int reverse(int n)
{
  int x=0;
  while (n!=0)
  {
    x = x*10 + (n%10);
    n/=10;
  }
  return x;
}



int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}
