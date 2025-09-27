/**
 *    Author: saminulislamsami
 *    Created: 28/9/2025 || 2:49 AM
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
    int n, min_dis = INT_MAX;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i += 1)
        cin >> vec[i];
    for (int i = 0; i < (n - 1); i += 1)
    {
        for (int j = 0; j < n; j += 1)
        {
            if (i != j)
                min_dis = min(min_dis, abs(vec[i] - vec[j]));
        }
    }
    cout << min_dis << endl;
}

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
        solve();
}
