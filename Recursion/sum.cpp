#include <bits/stdc++.h>
using namespace std;

int sumOfNum(int n)
{
    if (n == 1)
        return 1;
    return n + sumOfNum(n - 1);
}

int main()
{
    int n;
    cout << "Enter Number: " << endl;
    cin >> n;
    cout << "Sum: " << sumOfNum(n);
    return 0;
}