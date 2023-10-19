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

    Node a(10);
    Node b(20);

    a.next_address = &b;

    cout << a.val << endl;
    cout << b.val << endl;
    cout << a.next_address << endl;
    cout << b.next_address << endl;
    cout << (*a.next_address).val << endl;
    cout << (*a.next_address).next_address << endl;
    cout << a.next_address->val << endl;

    return 0;
}