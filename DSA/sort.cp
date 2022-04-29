/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
[]
template
###End banned keyword*/

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
void SortIncrease(List &l);

//###INSERT CODE HERE -
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
node *CreateNode(int iData)
{
    node *newNode = new node;
    newNode->info = iData;
    newNode->pNext = NULL;
    return newNode;
}
void nhap(List &l)
{
    int iData;
    do
    {
        cin >> iData;
        if (!iData)
            return;
        node *newNode = CreateNode(iData);
        addTail(l, newNode);
    } while (iData);
}
int ListSize(List l)
{
    node *p = l.pHead;
    int count = 0;
    while (p != NULL)
    {
        p = p->pNext;
        count++;
    }
    return count;
}
void SortIncrease(List &l)
{

    for (node *pTmp = l.pHead; pTmp != NULL; pTmp = pTmp->pNext)
    {
        for (node *pTmp2 = l.pHead; pTmp2 != NULL; pTmp2 = pTmp2->pNext)
        {
            if (pTmp->info < pTmp2->info)
                swap(pTmp->info, pTmp2->info);
        }
    }
}
void xuat(List l)
{
    node *p = l.pHead;
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->pNext;
        /* code */
    }
}
int main()
{
    List l;
    CreateList(l);
    nhap(l);
    if (l.pHead == NULL)
        cout << "Danh sach rong.";
    else
    {
        cout << "Danh sach vua nhap la: ";
        xuat(l);
        SortIncrease(l);
        cout << endl
             << "Danh sach sau khi sap xep la: ";
        xuat(l);
    }
    return 0;
}