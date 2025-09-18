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

    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        for (int i = 0; i < (n / 2); i += 1)
            cout << 2 << ' ';
    }
    else
    {
        cout << ((n - 3) / 2) + 1 << endl;
        for (int i = 0; i < ((n - 3) / 2); i += 1)
            cout << 2 << ' ';
        cout << 3 << endl;
    }

    return 0;
}