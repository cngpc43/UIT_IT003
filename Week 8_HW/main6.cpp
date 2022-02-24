

#include <iostream>
using namespace std;

int ucln (int a, int b){

 
  if (a==0 && b==0)
    return -1;
  else if (a==0)
    if (b>0) return b; else return -b;
  else if (b==0)
    if (a>0) return a; else return -a;
  if (b<0) b=-b;
  if (a<0) a= -a;
  while (a!=b)
    if (a>b)
      a=a-b;
    else 
      b=b-a;
  return a;

}

int main (){
	int n,m ;
	cin >> n >> m;
    if (ucln(n,m)==-1) cout <<n<<" va "<<n<<" khong co UCLN";
	else cout<<"UCLN cua "<<n<<" va "<<m<<" la "<<ucln(n,m);

	return 0;
}
