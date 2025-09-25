/**
 *    author: saminulislamsami
 *    created: 26/9/25 || 2:21AM
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

void solve()
{
    bool status = true;
    string hand;
    cin >> hand;

    for (int i = 0; i < 5; i += 1)
    {
        string x;
        cin >> x;
        if (x[0] == hand[0] || x[0] == hand[1] || x[1] == hand[1] || x[1] == hand[0])
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
    solve();
    return 0;
}