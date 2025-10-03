/**
 *    Author: saminulislamsami
 *    Created: 1/10/2025 || 1:44 AM
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
    int a, b, c;
    cin >> a >> b >> c;
    cout << max({a, b, c}) - min({a, b, c}) << endl;
}

int main()
{
    fasterio;

    // int t;
    // cin >> t;
    // while (t--)
    solve();
}