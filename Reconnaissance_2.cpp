/**
 *    Author: saminulislamsami
 *    Created: 5/10/2025 || 2:09 AM
 **/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fasterio                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; i += 1)
        cin >> vec[i];
    vec.push_back(vec[0]);
    int mini = INT_MAX, first = 0, second = 0;

    for (int i = 0; i < n; i += 1)
    {
        if (mini > abs(vec[i] - vec[i + 1]))
        {
            mini = abs(vec[i] - vec[i + 1]);
            first = i;
            second = i + 1;
            // debug(mini);
        }
    }
    // for (int i : vec)
    //     cout << i << ' ';
    // cout << endl;
    // debug(mini);
    // debug(first);
    // debug(second);
    if (second != n)
        cout << first + 1 << ' ' << second + 1 << endl;
    else
        cout << first + 1 << ' ' << (second + 1) - (vec.size() - 1) << endl;
}

int main()
{
    fasterio;

    // int t;
    // cin >> t;
    // while (t--)
    solve();
}