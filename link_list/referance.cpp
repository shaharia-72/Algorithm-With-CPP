#include <bits/stdc++.h>
using namespace std;

void fun(int *p)
{
    *p = 0;
}
int main()
{
    int val = 10;

    int *ptr = &val;

    fun(ptr);
    cout << "val = " << val << endl;
    cout << "val = " << &val << endl;
    cout << "ptr = " << ptr << endl;

    return 0;
}