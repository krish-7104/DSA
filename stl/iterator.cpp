#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(10);
    vector<int>::iterator it = v.begin(); // points to the memory where element is stores
    it++;
    cout << *(it) << " ";
    it += 2;
    cout << *(it) << " ";
    vector<int>::iterator itt = v.end(); // it will not point to 10 but to access last we need to do it--
    cout << *(--itt) << " ";

    cout << v.back() << " "; // last element
    return 0;
}