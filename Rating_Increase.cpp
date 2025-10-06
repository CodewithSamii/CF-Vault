/**
 *    Author: saminulislamsami
 *    Created: 10/6/2025 || 6:42 PM
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
    string ab, collect = "";
    cin >> ab;
    bool status = false;
    for (int i = ab.size() - 1; i >= 1; i -= 1)
    {
        collect.push_back(ab[i]);
        char temp = ab[i];
        ab.erase(ab.begin() + i);
        if (temp != '0')
        {
            reverse(collect.begin(), collect.end());
            if (stoi(collect) > stoi(ab))
            {
                // cout << "ab = " << ab << ' ' << "collect = " << collect << endl;
                cout << stoi(ab) << ' ' << stoi(collect) << endl;
                status = true;
                break;
            }

            reverse(collect.begin(), collect.end());
        }

        // cout << "ab = " << ab << "collect = " << collect << endl;
    }
    if (!status)
        cout << -1 << endl;
}

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
        solve();
}
