/*Status: Unsovled. was detecting parity, then printing 1/2. But we cant print 1/2 if its the value of x. There may some other odd/evens, like 2 and 3 can add up to 5. and if 1 is x(forbidden), we cant print it five times in row. in this case we have to detect that there is a odd value 3. full approach may change.
*/

/**
 *    Author: saminulislamsami
 *    Created: 1/10/2025 || 7:47 PM
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
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> vec;
    for (int i = 1; i <= k; i += 1)
        if (i != x)
            vec.push_back(i);
    if (vec.size() < 1)
        no;
    else if (vec.size() == 1)
    {
        if ((vec[0] % 2 == 0 && n % 2 != 0))
            no;
        else
            goto end;
    }
    else
    {
    end:
        yes;
        if (n % 2 == 0)
        {
            if (x != 2)
            {
                cout << n / 2 << endl;
                for (int i = 0; i < (n / 2); i += 1)
                    cout << 2 << ' ';
                cout << endl;
            }
            else
            {
                cout << n << endl;
                for (int i = 0; i < n; i += 1)
                    cout << 1 << ' ';
                cout << endl;
            }
        }
        else
        {
            if (x != 2)
            {
                cout << n / 2 + 1 << endl;
                for (int i = 0; i < (n - 1) / 2; i += 1)
                    cout << 2 << ' ';
                cout << 1 << endl;
            }
            else
            {
                cout << n << endl;
                for (int i = 0; i < n; i += 1)
                    cout << 1 << endl;
            }
        }
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