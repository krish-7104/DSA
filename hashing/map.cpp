#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mpp;
    // unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    // map stores each data in sorted way -> Complexity log(n)
    // unordered_map stores each data in unsorted way -> Worst Case Complexity o(n), average and best is O(1), worst case comes very rare
    // first preference should me unordered

    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        cout << mpp[num] << endl;
    }
    return 0;
}

// iterate map
// for (auto it : mpp)
// {
//     cout << it.first << " -> " << it.second << endl;
// }