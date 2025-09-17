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
#define debug(mp) cerr << #mp << " = " << (mp) << endl
#else
#define debug(mp)
#endif

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string rep;
        cin >> rep;
        map<char, int> mp;
        bool status = true;
        for (int i = 0; i < n; i += 1)
        {
            char c = rep[i];
            if (mp.count(c))
            {
                if ((mp[c] % 2) == (i % 2))
                {
                    status = false;
                    break;
                }
            }
            mp[c] = i;
        }
        if (status)
            yes;
        else
            no;
    }

    return 0;
}
