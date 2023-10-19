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

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next_address;
    }

    return 0;
}