#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl endl
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> odd;
        ll sum = 0;
        for (int i = 0; i < n; i += 1)
        {
            ll x;
            cin >> x;
            if (x % 2 == 0)
                sum += x;
            else
                odd.push_back(x);
        }

        if (odd.empty())
            cout << 0 << endl;
        else
        {
            sort(odd.rbegin(), odd.rend());
            int y = (odd.size() + 1) / 2;

            ll ans = sum;
            for (int i = 0; i < y; i += 1)
                ans += odd[i];
            cout << ans << endl;
        }
    }
}