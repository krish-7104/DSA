#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(5);
    v.emplace_back(2); // faster than push back
    cout << v.at(0) << " " << v.at(1);

    vector<pair<int, int>> vec;
    vec.push_back({1, 3});
    vec.emplace_back(0, 1);
    return 0;
}