/**
 *    Author: saminulislamsami
 *    Created: 29/9/2025 || 7:11 PM
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
    double n, k, p;
    cin >> n >> k >> p;
    if (k == 0)
        cout << 0 << endl;
    else if ((n * p) < abs(k))
        cout << -1 << endl;
    else
        cout << ceil(abs(k)  / abs(p) ) << endl;
}

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
        solve();
}