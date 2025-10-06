/// Status : Unsolved. tried during contest. i made mistaking calculating same consecutive latters while it can be both a and b contiguous. so whole solution false

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
    int n;
    cin >> n;
    string str;
    cin >> str;

    int a = 0, b = 0;
    for (int i = 0; i < n; i += 1)
    {
        if (str[i] == 'a')
            a++;
        else
            b++;
    }
    if (a == b)
        cout << 0 << endl;
    else if (a == 0 || b == 0)
        cout << -1 << endl;
    else
    {
        int count = 1, newcount = 1;
        for (int i = 0; i < (n - 1); i += 1)
        {
            if (str[i] == str[i + 1])
            {
                newcount++;
                count = max(count, newcount);
            }
            else
                newcount = 1;
        }
        // debug(count);
        if (count >= abs(a - b))
            cout << count << endl;
        else
            cout << -1 << endl;
        // cout << abs(a - b) << endl;
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
