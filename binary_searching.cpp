/*You are given an array of N positive integers. The next line will contain an integer K. You need to tell whether there exists more than one occurrence of K in that array or not. If there exists more than one occurrence of K print YES, Otherwise print NO. See the sample input-output for more clarification. The given array will be sorted in increasing order. And it is guaranteed that at least one occurrence of K will exist.	 You must solve this in O(logn) complexity. */

#include <bits/stdc++.h>
using namespace std;

int binary_search(const vector<int> &arr, int match)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == match)
        {
            return mid;
        }

        else if (arr[mid] < match)
        {
            left = mid + 1;
        }

        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    int result = binary_search(arr, k);

    if (result == -1)
    {
        cout << "NO" << endl;
    }

    if (result != -1)
    {
        cout << "YES" << endl;
    }
    return 0;
}