#include <bits/stdc++.h>
using namespace std;
// hash using character
int main()
{
    string s;
    cin >> s;
    int q;
    cin >> q;

    int hash[256] = {0};
    // if all character add 256
    //  lowercase 26 and s[i]-'a'
    //  uppercase 26 and s[i]-'A'
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    while (q--)
    {
        char c;
        cin >> c;
        cout << hash[c] << endl;
        //  lowercase s[i]-'a'
        //  uppercase s[i]-'A'
    }
    return 0;
}