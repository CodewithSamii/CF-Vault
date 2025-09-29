/**
 *    Author: saminulislamsami
 *    Created: 30/9/2025 || 1:45 AM
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
    vector<int> vec;
    set<int> ans;

    for (int i = 0; i < (n * 2); i += 1)
    {
        int x;
        cin >> x;
        if (!ans.count(x))
        {
            vec.push_back(x);
            ans.insert(x);
        }
    }
    for (int i : vec)
        cout << i << ' ';
    cout << endl;
}

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
        solve();
}