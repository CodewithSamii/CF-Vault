/**
 *    Author: saminulislamsami
 *    Created: 28/9/2025 || 5:12 PM
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
    int n, a, b;
    cin >> n >> a >> b;

    if (n % 2 == 0)
    {
        if ((a * 2) > b)
            cout << (n / 2) * b << endl;
        else
            cout << n * a << endl;
    }
    else
    {
        if ((a * 2) > b)
            cout << (((n - 1) / 2) * b) + a << endl;
        else
            cout << n * a << endl;
    }
}

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
        solve();
}