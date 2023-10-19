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
    Node *tail = new Node(20);

    head->next_address = tail;

    cout << (head)->val << endl;
    cout << (tail)->val << endl;
    cout << head->next_address << endl;
    cout << tail->next_address << endl;
    cout << head->next_address->val << endl;
    cout << head->next_address->next_address << endl;
    // cout << tail->next_address-> << endl;

    return 0;
}