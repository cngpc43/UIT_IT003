/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
template
[
]
###End banned keyword*/
#include <iostream>
using namespace std;
//###INSERT CODE HERE -
struct PS
{
    /* data */
    long long t;
    long long m;
};

struct node
{
    PS info;
    node *pNext;
};
struct List
{
    node *pHead;
    node *pTail;
};
void CreateList(List &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

void addTail(List &l, node *p)
{
    if (l.pHead == NULL)
    {
        l.pHead = p;
        l.pTail = p;
    }
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}
node *CreateNode(PS iData)
{
    node *newNode = new node;
    newNode->info = iData;
    newNode->pNext = NULL;
    return newNode;
}
void nhap(List &l)
{
    PS iData;
    do
    {
        cin >> iData.t >> iData.m;
        if (!iData.m)
            return;
        node *newNode = CreateNode(iData);
        addTail(l, newNode);
    } while (iData.m);
}

void Output(List s)
{
    cout << "Danh sach vua nhap la: ";
    node *p = s.pHead;
    while (p != NULL)
    {
        cout << p->info.t << "/" << p->info.m << " ";
        p = p->pNext;
    }
    cout << endl;
}
node *search(List l, node *p, PS x)
{
    while (p != NULL)
    {
        if ((long double)p->info.t / p->info.m == (long double)x.t / x.m)
            return p;
        p = p->pNext;
    }
    return p;
}
void Count(List l, PS x)
{

    node *p = search(l, l.pHead, x);
    if (p != NULL)
    {
        cout << "Cac phan so bang " << x.t << "/" << x.m << " co trong danh sach la: ";
        while (p != NULL)
        {
            cout << p->info.t << "/" << p->info.m << " ";
            p = search(l, p->pNext, x);
        }
    }
    else
        cout << "Khong co phan so nao bang " << x.t << "/" << x.m << " trong danh sach.";
}
int main()
{
    PS x;
    List l;
    CreateList(l);
    nhap(l);
    if (l.pHead != NULL)
    {
        cin >> x.t >> x.m;
        Output(l);
        Count(l, x);
    }
    else
    {
        cout << "Danh sach rong.";
    }
}