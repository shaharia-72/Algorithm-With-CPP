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

void li_list(Node *&head, int val)
{

    Node *n = new Node(val);
    Node *tmp = head;

    if (head == NULL)
    {
        head = n;
        return;
    }

    while (tmp->next_address != NULL)
    {
        tmp = tmp->next_address;
    }

    tmp->next_address = n;
};

void display(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next_address;
    }
};
int main()
{
    int n, val;
    cin >> n;
    Node *head = NULL;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        li_list(head, val);
    }

    display(head);

    return 0;
}