#include <bits/stdc++.h>
using namespace std;

void reversedArray(int *arr, int n, int l, int r)
{
    if (l >= r)
        return;
    int temp = arr[r];
    arr[r] = arr[l];
    arr[l] = temp;
    reversedArray(arr, n, l + 1, r - 1);
}

int main()
{
    int arr[] = {1, 8, 3, 6, 9};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reversedArray(arr, n, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}