#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define fasterio                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        map<char, int> mp;

        for (int i = 0; i < (int)str.length(); i += 1)
            mp[i]++;
        int ones = 0, multiples = 0;
        for (auto p : mp)
        {
            if (p.second > 1)
                multiples++;
            else if (p.second == 0)
                continue;
            else
                ones++;
        }
        cout << ones << endl
             << multiples << endl;
        cout << (ones / 2) + multiples << endl;
    }

    return 0;
}
