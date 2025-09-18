// /// Status: Time limit exceed, not solved
// /// Required O(t) solution

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int x, y, n;
//         cin >> x >> y >> n;

//         for (int i = n; i >= 0; i--)
//         {
//             if (i % x == y)
//             {
//                 cout << i << endl;
//                 break;
//             }
//         }
//     }
// }

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
        ll x, y, k;
        cin >> x >> y >> k;

        ll remi = k % x;
        if (remi < y)
            cout << k - (abs(x - y) + remi) << endl;
        else if (remi == y)
            cout << k << endl;
        else
            cout << k - (remi - y) << endl;
    }
    return 0;
}