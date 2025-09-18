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
        int n, x;
        cin >> n >> x;
        vector<int> vec(n);
        for (int i = 0; i < n; i += 1)
            cin >> vec[i];

        if (n == 1)
            cout << max(vec[0], abs(x - vec[0]) * 2) << endl;
        else
        {
            // vec.push_back(x + abs(x - vec[n - 1]));
            int maxD = 0;
            for (int i = 0; i < (n - 1); i += 1)
            {
                int x = abs(vec[i] - vec[i + 1]);
                maxD = max(x, maxD);
            }
            int p = abs(vec[n - 1] - x) * 2;
            // cout << "p: " << p << endl;
            maxD = max({p, maxD, vec[0]});
            cout << maxD << endl;
        }
    }
}