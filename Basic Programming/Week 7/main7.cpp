#include <iostream>
using namespace std;




int Input()
{
    int x;
    cin >> x;
    return x;
}
int sum_even_divisor(int n)
{
    int sum=0;
    for (int i=2; i<=n; i++)
        if (i %2 == 0 && n%i==0)
            sum+=i;
    if (sum==0) 
        return -1;
    return sum;
}




int main() {
	int n;
	n=Input();
	cout << sum_even_divisor(n);
}