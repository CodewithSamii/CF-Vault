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
        int n, maxN = 0, index = 0;
        cin >> n;
        for (int i = 0; i < n; i += 1)
        {
            int a, b;
            cin >> a >> b;
            if (a < 11)
            {
                if (b > maxN)
                {
                    maxN = b;
                    index = i + 1;
                }
            }
        }
        cout << index << endl;
    }
    return 0;
}