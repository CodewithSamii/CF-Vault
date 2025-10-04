/**
 *    Author: saminulislamsami
 *    Created: 4/10/2025 || 10:40 PM
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
    vector<vector<string>> vec(3);
    map<string, int> mp;

    for (int i = 0; i < 3; i += 1)
    {
        for (int j = 0; j < n; j += 1)
        {
            string a;
            cin >> a;
            vec[i].push_back(a);
            mp[a]++;
        }
    }

    for (int i = 0; i < 3; i += 1)
    {
        int sum = 0;
        for (int j = 0; j < n; j += 1)
        {
            if (mp[vec[i][j]] == 1)
                sum += 3;
            if (mp[vec[i][j]] == 2)
                sum += 1;
        }
        cout << sum << ' ';
    }
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
