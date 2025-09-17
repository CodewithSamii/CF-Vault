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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i += 1)
            cin >> arr[i];

        bool ok = true;
        for (int k = n; k >= 1; k -= 1)
        {
            bool found = false;
            for (int s = 0; s + k <= n; s += 1)
            {
                bool all = true;
                for (int j = s; j < s + k; j += 1)
                    if (arr[j] < 1)
                    {
                        all = false;
                        break;
                    }
                if (all)
                {
                    for (int j = s; j < s + k; j += 1)
                        arr[j] -= 1;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                ok = false;
                break;
            }
        }

        if (ok)
            yes;
        else
            no;
    }
    return 0;
}
