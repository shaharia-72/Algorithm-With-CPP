#include <bits/stdc++.h>
using namespace std;
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
    adjacent_difference(arr, arr + n, new_arr, multiplies<int>());

    for (int i = 0; i < n; i++)
    {
        cout << new_arr[i] << " ";
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