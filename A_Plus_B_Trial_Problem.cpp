/**
 *    Author: saminulislamsami
 *    Created:
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
    int a, b;
    cin >> a >> b;

    cout << a + b << endl;
}

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
        solve();
}