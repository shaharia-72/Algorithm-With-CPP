
#include <bits/stdc++.h>
using namespace std;

int m_custom2(int *x, int *y)
{

    return (*x % *y == 0);
};
int main()
{
    int n;
    cin >> n;
    int arr[n];

    int new_arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // adjacent_difference(arr, arr + n, new_arr, divides<int>());
    adjacent_difference(arr, arr + n, new_arr, m_custom2);

    for (int i = 0; i < n; i++)
    {
        if (new_arr[i] == 0)
        {
            cout << new_arr[i]
                 << " ";
        }
        else
            cout << "NO"
                 << " ";
    }
    cout << endl;

    return 0;
}

// adjacent_difference with vector;

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     vector<int> v2(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << v[i] << " ";
//     // }

//     adjacent_difference(v.begin(), v.end() + n, v2.begin(), divides<double>());

//     for (int i = 0; i < n; i++)
//     {
//         cout << v2[i] << " ";
//     }

//     return 0;
// }