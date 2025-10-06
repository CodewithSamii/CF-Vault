/**
 *    Author: saminulislamsami
 *    Created: 6/10/2025 || 8:40 PM
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
    if (n % 3 != 0)
        cout << 3 - (n % 3) << endl;
    else
        cout << 0 << endl;
}

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
        solve();
}