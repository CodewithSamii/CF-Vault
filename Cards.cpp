/**
 *    Author: saminulislamsami
 *    Created: 1/10/2025 || 8:47 PM
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
    map<char, int> mp;
    mp['o'] = 0;
    mp['n'] = 0;
    mp['e'] = 0;
    for (int i = 0; i < n; i += 1)
        mp[str[i]]++;
    int min_count = INT_MAX;
    for (auto &p : mp)
    {
        if (p.first == 'o' || p.first == 'n' || p.first == 'e')
            min_count = min(min_count, p.second);
    }
    // debug(min_count);
    int temp = min_count;
    while (min_count--)
        cout << 1 << ' ';
    // cout << endl;

    for (auto &p : mp)
    {
        if (p.first == 'o' || p.first == 'e')
            p.second -= temp;
        else if (p.first == 'n')
            p.second = INT_MAX;
    }

    // for (auto &p : mp)
    //     cout << p.first << "-> " << p.second << endl;

    int min_count_two = INT_MAX;
    for (auto &p : mp)
        min_count_two = min(min_count_two, p.second);
    while (min_count_two--)
        cout << 0 << ' ';
    cout << endl;
}

int main()
{
    fasterio;

    // int t;
    // cin >> t;
    // while (t--)
    solve();
}