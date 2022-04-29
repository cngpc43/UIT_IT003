#include <iostream>
using namespace std;

struct Node
{
    int iData;
    Node *pNext;
};

struct List
{
    Node *pHead;
    Node *pTail;
};

void createList(List &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

Node *createNode(int iData)
{
    Node *newNode = new Node;
    newNode->iData = iData;
    newNode->pNext = NULL;
    return newNode;
}
void addTail(List &l, Node *p)
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
void input(List &l)
{
    int iData, num = 0;
    do
    {
        cin >> iData;
        if (!iData)
            return;
        Node *newNode = createNode(iData);
        addTail(l, newNode);
    } while (iData);
}
bool isPrime(int x)
{
    if (x < 2)
        return 0;
    int i = 2;
    while (i * i <= x)
    {
        if (x % i == 0)
            return 0;
        i++;
    }
    return 1;
}
void output(List l)
{
    if (l.pHead == NULL)
    {
        cout << "Danh sach rong.";
        return;
    }
    int i = 1;
    Node *p = l.pHead;
    while (p != NULL)
    {
        if (isPrime(p->iData) == 1 && i % 2 == 0)
        {
            cout << p->iData << " ";
        }
        p = p->pNext;
        i++;
    }
}

int main()
{
    List l;
    createList(l);
    input(l);
    output(l);
    return 0;
}