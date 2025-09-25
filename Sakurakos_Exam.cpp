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
        int a, b, sum = 0;
        cin >> a >> b;
        if (a == 0 || b == 0)
        {
            sum += a;
            sum += b;
        }
        else
        {
            sum += a;
            sum += (b * 2);
        }
        if (sum % 2 == 0)
            yes;
        else
            no;
    }
    return 0;
}

