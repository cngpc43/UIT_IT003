#include <iostream>
using namespace std;

void search(int a[], int n,int &max, int & count)
{
  for (int i=0; i<n; i++)
    if (a[i]>max)
      max = a[i];
  for (int i=0; i<n; i++)
    if (a[i]==max)
      count++;
}
int main()
{
  int n,max=0, count=0;
  int a[100];
  cin >> n;
  for (int i=0; i<n; i++)
    cin >> a[i];
  search(a,n,max, count);
  cout << max << endl << count;
  return 0;
}