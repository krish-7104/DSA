#include <bits/stdc++.h>
using namespace std;
// int hash[13] = {0};  outside main max size can be 1e7 (10^7)
int main()
{
    int n;
    cin >> n;
    int arr[13];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // hashing
    int hash[13] = {0}; // inside main max size can be 1e6 (10^6)
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int k;
        cin >> k;
        cout << k << " arrives " << hash[k] << " times" << endl;
    }
    return 0;
}