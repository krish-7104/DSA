#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1, 5, 2, 78, 1, 9};
    cout << "Last Element " << v1.back() << endl;

    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // another way to iterate

    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    for (auto it : v1) // for each loop
    {
        cout << it << " ";
    }

    return 0;
}