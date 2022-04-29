#include <iostream>
#include <math.h>
using namespace std;
struct PS
{
    int t;
    int m;
};
int main()
{
    int n;
    cin >> n;
    PS x;
    PS *a = new PS[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i].t >> a[i].m;
    }
    cin >> x.t >> x.m;
    for (int i = 0; i < n - 1; i++)
    {
        cout << "#STEP " << i + 1 << ":" << endl;
        int minn = i;
        for (int j = i + 1; j < n; j++)
            if ((float)a[j].t / a[j].m < (float)a[minn].t / a[minn].m)
                minn = j;
        swap(a[i], a[minn]);
        for (int j = 0; j < n; j++)
            cout << a[j].t << "/" << a[j].m << " ";

        cout << endl;
    }
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m;
        m = l + (r - l) / 2;
        cout << "[Left=" << l + 1 << ", Mid=" << m + 1 << ", Right=" << r + 1 << "]";
        cout << endl;
        if ((float)a[m].t / a[m].m < float(x.t) / x.m)
        {
            l = m + 1;
        }
        else
            r = m - 1;
    }
    if ((float)a[l].t / a[l].m == (float)x.t / x.m)
    {
        cout << "Tim thay phan so bang X tai vi tri be nhat la: " << l + 1;
    }
    else
        cout << "Khong tim thay phan so bang X";
    return 0;
}