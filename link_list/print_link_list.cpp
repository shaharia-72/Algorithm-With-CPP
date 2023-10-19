#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next_address;
    Node(int val)
    {
        this->val = val;
        this->next_address = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next_address = a;
    a->next_address = b;
    b->next_address = c;
    c->next_address = d;
    cout << "1" << endl;
    cout << head->val << endl;
    cout << head << endl;
    cout << head->next_address << endl;
    cout << endl;

    cout << "2" << endl;
    cout << a->val << endl;
    cout << a << endl;
    cout << a->next_address << endl;
    cout << endl;

    cout << "3" << endl;
    cout << b->val << endl;
    cout << b << endl;
    cout << b->next_address << endl;
    cout << endl;

    cout << "4" << endl;
    cout << c->val << endl;
    cout << c << endl;
    cout << c->next_address << endl;
    cout << endl;

    cout << "5" << endl;
    cout << d->val << endl;
    cout << d << endl;
    cout << d->next_address << endl;

    return 0;
}