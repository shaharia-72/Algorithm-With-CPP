#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next_address;
};
int main()
{

    Node a, b;

    a.val = 10;
    a.next_address = &b;
    b.val = 20;
    b.next_address = NULL;

    cout << a.val << endl;
    cout << b.val << endl;
    cout << a.next_address << endl;
    cout << b.next_address << endl;
    cout << (*a.next_address).val << endl;
    cout << (*a.next_address).next_address << endl;
    cout << a.next_address->val << endl;

    return 0;
}