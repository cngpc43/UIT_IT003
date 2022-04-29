#include <iostream>
using namespace std;

int main()
{
  int h, m , s, h1,m1,t, t1, s1, temp, temp1;
  cin >> h >> m >> s >> h1 >> m1 >> s1;
  t= h*3600 + m*60 + s; 
  t1= h1*3600 + m1*60 + s1; 
  temp=t;
  temp1=t1;
  while (t!=t1)
    if (t>t1)
      t=t-t1;
    else 
      t1=t1-t;
  cout << temp1/t << " " << temp/t; 
  return 0;
}