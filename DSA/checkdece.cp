#include <iostream>
using namespace std;
struct node
{
    int info;
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
node *createNode(int iData)
{
    node *p;
    p = new node;
    if (p == NULL)
        return NULL;
    p->info = iData;
    p->pNext = NULL;
    return p;
}
void input(List &l)
{
    int iData;
    do
    {
        cin >> iData;
        if (!iData)
            return;
        node *newNode = createNode(iData);
        addTail(l, newNode);
    } while (iData);
}

void Out(List l)
{

    node *p = l.pHead;
    cout << "Danh sach vua nhap la: ";
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->pNext;
    }
    cout << endl;
}
bool CheckAs(List l)
{
    node *p = l.pHead;
    while ((p->pNext) != NULL)
    {
        if (p->info >= (p->pNext)->info)
        {
            return false;
        }
        p = p->pNext;
    }
    return true;
}
bool CheckDes(List l)
{
    node *p = l.pHead;
    while ((p->pNext) != NULL)
    {
        if (p->info <= (p->pNext)->info)
        {
            return false;
        }
        p = p->pNext;
    }
    return true;
}

void Check(List l)
{
    if (!CheckAs(l) && !CheckDes(l))
        cout << "Danh sach khong tang cung khong giam.";
    else if (CheckAs(l))
        cout << "Danh sach tang.";
    else if (CheckDes(l))
        cout << "Danh sach giam.";
}
int main()
{
    List l;
    CreateList(l);
    input(l);
    if (l.pHead == NULL)
    {
        cout << "Danh sach rong.";
        goto end;
    }
    Out(l);
    Check(l);
end:
    return 0;
}
