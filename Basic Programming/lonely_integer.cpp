// HackerRank
// Lonely Integer
// Problem Solving
// Author: sejalxz

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ans, n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (count(a, a + n, a[i]) == 1)
        {
            cout << a[i];
            break;
        }
    }
    return 0;
}