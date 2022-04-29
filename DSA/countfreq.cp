struct Node
{
    int Info;
    Node *pNext;
};

struct List
{
    Node *pHead;
    Node *pTail;
    int n = 0;
};

void CreateList(List &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

Node *CreateNode(int x)
{
    Node *p;
    p = new Node;
    if (p == NULL)
        exit(1);
    p->Info = x;
    p->pNext = NULL;
    return p;
}

void AddHead(List &l, Node *p)
{
    if (l.pHead == NULL)
    {
        l.pHead = p;
        l.pTail = l.pHead;
    }
    else
    {
        p->pNext = l.pHead;
        l.pHead = p;
    }
}

void AddTail(List &l, Node *p)
{
    if (l.pHead == NULL)
    {
        l.pHead = p;
        l.pTail = l.pHead;
    }
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}

void Input(List &l)
{
    int x;
    while (true)
    {
        cin >> x;
        if (x == 0)
            return;
        Node *p = CreateNode(x);
        AddTail(l, p);
        l.n++;
    }
}

void Copy(List l, List &d)
{
    Node *p = l.pHead;
    while (p != NULL)
    {
        Node *q = CreateNode(p->Info);
        AddTail(d, q);
        p = p->pNext;
    }
}

void Output(List l)
{
    cout << "Danh sach vua nhap la: ";
    Node *p = l.pHead;
    while (p != NULL)
    {
        cout << p->Info << " ";
        p = p->pNext;
    }
    cout << endl;
}

int Count(List &l, int x)
{
    int count = 0;
    Node *p = l.pHead;
    Node *q = l.pHead;
    while (p != NULL)
    {
        if (p->Info == x)
        {
            Node *r = p;
            if (p == l.pHead)
            {
                l.pHead = l.pHead->pNext;
                p = l.pHead;
                q = l.pHead;
            }
            else
            {
                q->pNext = p->pNext;
                p = p->pNext;
            }
            count++;
            delete r;
            continue;
        }
        q = p;
        p = p->pNext;
    }
    return count;
}

void ListOfCount(List &l)
{
    cout << "So lan xuat hien cua tung phan tu trong danh sach la:" << endl;
    while (l.pHead != NULL)
    {
        int x = l.pHead->Info;
        cout << x << ": " << Count(l, x) << endl;
    }
}

int main()
{
    List l;
    CreateList(l);
    Input(l);
    if (l.pHead == NULL)
        cout << "Danh sach rong.";
    else
    {
        Output(l);
        ListOfCount(l);
    }
    return 0;
}