/**
 *    Author: saminulislamsami
 *    Created: 28/9/2025 || 6:08 PM
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

    double th = n / 3.0;
    int ceil_val = ceil(th);
    int floor_val = floor(th);

    if ((floor_val * 2) + ceil_val == n)
        cout << ceil_val << ' ' << floor_val << endl;
    else
        cout << floor_val << ' ' << ceil_val << endl;
}

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
        solve();
}