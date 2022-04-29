/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
[
]
template
###End banned keyword*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
struct Node
{
    /* data */
    int idata;
    Node *pnext;
};
struct Stack
{
    Node *pHead;
    Node *pTail;
    /* data */
};
void CreateSt(Stack &s)
{
    s.pHead = NULL;
    s.pTail = NULL;
}
Node *CreateNode(int x)
{
    Node *p = new Node;

    p->idata = x;
    p->pnext = NULL;
    return p;
}
int IsEmpty(Stack &s)
{
    if (s.pHead == NULL)
        return 1; // Stack rỗng return 1;
    else
    {
        return 0;
    }
}
void Push(Stack &s, Node *newNode)
{
    if (s.pHead == NULL)
    {
        s.pHead = s.pTail = newNode;
    }
    else
    {
        newNode->pnext = s.pHead;
        s.pHead = newNode;
    }
}

int Pop(Stack &s)
{
    Node *p;
    Node *q = s.pHead;
    if (IsEmpty(s) != 1)
    {
        if (s.pHead != NULL)
        {
            p = s.pHead;
            s.pHead = s.pHead->pnext;
            if (s.pHead == NULL)
                s.pTail = NULL;
            return 1;
            delete p;
        }
    }
    return 0;
}
void nhap(Stack &s, int x)
{
    int iData;
    do
    {
        cin >> iData;
        if (!iData)
            return;
        else if (iData != x)
        {
            Node *newNode = CreateNode(iData);
            Push(s, newNode);
        }
        else if (IsEmpty(s) == 0 && iData == x)
        {
            Pop(s);
        }
        else
        {
            cout << "Stack rong." << endl;
        }
    } while (iData);
}
void Output(Stack s)
{

    if (s.pHead == NULL)
    {
        cout << "Stack rong.";
        return;
    }
    else
    {
        cout << "Cac gia tri co trong stack la: ";
        Node *p = s.pHead;
        while (p != NULL)
        {
            cout << p->idata << " ";
            p = p->pnext;
        }
        cout << endl;
    }
}
int main()
{
    Stack s;
    CreateSt(s);
    int x;
    cin >> x;
    nhap(s, x);

    Output(s);
}