/**
 *    Author: saminulislamsami
 *    Created: 27/9/2025 || 12:47 AM
 **/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
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

void solve() {
    int a, b;
    cin >> a >> b;
    if(a == 0) cout << 1 << endl;
    // else if(b == 0) cout << 2 << endl;
    else
        cout << a + (b * 2) + 1 << endl;
}

int main() {
    fasterio;

    int t;
    cin >> t;
    while(t--)
        solve();
}