/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
template
###End banned keyword*/
#include <iostream>
#include <string.h>
using namespace std;
//###INSERT CODE HERE -
struct node
{
    int info;
    node *pNext;
};
struct List
{
    node *pHead;
};
void CreateList(List &l)
{
    l.pHead = NULL;
}
node *CreateNode(int x);
void AddHead(List &l, node *p);
void enstack(List &l, int x, int y);
void destack(List &l);
bool isEmpty(List l);
int main()
{
    List st;
    CreateList(st);
    long long x, y;
    cin >> x >> y;
    enstack(st, x, y);
    while (isEmpty(st) == 0)
    {
        /* code */ destack(st);
    }
}
node *CreateNode(int x)
{
    node *p = new node;
    p->info = x;
    p->pNext = NULL;
    return p;
}
void AddHead(List &l, node *p)
{
    if (l.pHead == NULL)
    {
        l.pHead = p;
    }
    else
    {
        p->pNext = l.pHead;
        l.pHead = p;
    }
}
bool isEmpty(List l)
{
    if (l.pHead == NULL)
        return 1; // Stack rỗng return 1;
    else
    {
        return 0;
    }
}
void destack(List &l)
{
    int x;
    node *p;
    x = l.pHead->info;
    p = l.pHead;
    l.pHead = l.pHead->pNext;
    delete p;
    cout << x;
}
void enstack(List &l, int x, int y)
{
    int a, b, c = 0, tmp;
    while (x != 0)
    {
        a = x % 10;
        b = a * y + c;
        tmp = b;
        if (b >= 10)
        {
            b = b % 10;
            node *p = CreateNode(b);
            AddHead(l, p);
            c = tmp / 10;
        }
        else
        {
            node *p = CreateNode(b);
            AddHead(l, p);
        }
        x /= 10;
    }
}
