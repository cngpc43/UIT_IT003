/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
struct
template
###End banned keyword*/
#include <string>
#include <iostream>
using namespace std;
struct node
{
    char info;
    node *pNext;
};
struct List
{
    node *pHead;
    node *pTail;
};
void CreateList(List &l);
node *CreateNode(char x);
void AddTail(List &l, node *p);
void Xuat(List l);
void enqueue(List &l, char x);
int dequeue(List &l);
bool isEmpty(List l);
int main()
{
    char c;
    cin >> c;
    string s = "";
    cin >> s;
    List queue;
    CreateList(queue);
    if (!s.size())
    {
        cout << "Chuoi rong.";
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != c)
            {
                enqueue(queue, s[i]);
            }
            else
            {
                cout << queue.pHead->info;
                dequeue(queue);
            }
        }
        cout << endl;
        if (queue.pHead == NULL)
        {
            cout << "Hang doi rong.";
        }
        else
        {
            cout << "Cac gia tri co trong hang doi la: ";
            Xuat(queue);
        }
    }

    //###INSERT CODE HERE -
}
void CreateList(List &q)
{
    q.pHead = NULL;
    q.pTail = NULL;
}
node *CreateNode(char x)
{
    node *p = new node;
    if (p == NULL)
        return NULL;
    p->info = x;
    p->pNext = NULL;
    return p;
}
void enqueue(List &l, char x)
{
    node *p = CreateNode(x);
    if (l.pHead == NULL)
        l.pHead = l.pTail = p;
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}
int dequeue(List &l)
{
    if (l.pHead != NULL)
    {
        node *p = l.pHead;
        l.pHead = p->pNext;
        if (l.pHead == NULL)
            l.pTail = NULL;
        delete p;
        return 1;
    }
    return 0;
}
void Xuat(List s)
{

    node *p = s.pHead;
    while (p != NULL)
    {
        cout << p->info;
        p = p->pNext;
    }
    cout << endl;
}