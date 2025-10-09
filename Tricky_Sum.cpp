// /**
//  *    Author: saminulislamsami
//  *    Created: 9/10/2025 || 8:57 PM
//  **/

// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define ll long long int
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define fasterio                 \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr);            \
//     cout.tie(nullptr);

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr << #x << " = " << (x) << endl
// #else
// #define debug(x)
// #endif

// void solve()
// {
//     ll n;
//     cin >> n;
//     // vector<ll> power;
//     // power.push_back(1);

//     // for (ll i = 2; i <= LLONG_MAX; i *= 2)
//     //     power.push_back(i);

//     // vector < int > keep;
//     // sort(power.begin(), power.end());
//     ll sum = 0;
//     for (ll i = 1, j = 1; j <= n; j += 1)
//     {
//         if (j == i)
//         {
//             sum -= j;
//             // debug(j);
//             // debug(i);
//             // debug(sum);
//             i *= 2;
//         }
//         else
//         {
//             sum += j;
//             // debug(j);
//             // debug(i);
//             // debug(sum);
//         }
//     }
//     cout << sum << endl;
// }

// int main()
// {
//     fasterio;

//     int t;
//     cin >> t;
//     while (t--)
//         solve();
// }

/*2n(n+1)​−2(2k+1−1)*/

/**
 *    Author: saminulislamsami
 *    Created:
 **/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fasterio                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

void solve()
{
    ll n;
    cin >> n;

    ll sum = n * (n + 1)/ 2;
    ll power = 1, sum2 = 0;
    while (power <= n)
    {
        sum2 += power;
        power*= 2;
    }
    sum -= 2*sum2;
    cout << sum << endl;
    
}

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
        solve();
}