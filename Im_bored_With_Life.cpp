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
    fasterio;

    ll a, b;
    cin >> a >> b;
    ll n = min(a, b);

    ll ans = 1;
    for (long long i = 1; i <= n; i += 1)
        ans *= i;

    cout << ans << endl;
    return 0;
}
