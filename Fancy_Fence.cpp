/**
 *    Author: saminulislamsami
 *    Created: 28/9/2025 || 10:18 PM
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
    int a;
    cin >> a;
    bool status = true;
    for (int n = 3; n <= 360; n += 1)
    {
        if (360 % n == 0 && ((n - 2) * 180) / n == a)
        {
            yes;
            status = false;
            break;
        }
    }
    if (status)
        no;
}

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
        solve();
}