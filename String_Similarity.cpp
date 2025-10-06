
// /**
//  *    Author: saminulislamsami
//  *    Created: 7/10/2025 || 3:01 AM
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
//     int n;
//     cin >> n;
//     string str;
//     cin >> str;
//     vector<vector<int>> vec(n);
//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = i; j < (n + i); j += 1)
//             vec[i].push_back((int)str[j] - 48);
//     }
//     vector<int> vec2(n);
//     for (int i = 0; i < n; i += 1)
//         vec2[i] = 0;

//     // for (int i : vec2)
//     //     cout << i << ' ';
//     // cout << endl;

//     int j = 0;
//     for (int k = 0; k < n; k += 1)
//     {
//         for (int i = 0; i < n; i += 1)
//         {
//             int d = j + 1;
//             for (j; j < d; j += 1)
//             {
//                 // if (vec2[i] != vec[i][j])
//                     vec2[i] ^= vec[i][j];
//             }
//             j--;
//         }
//         j++;
//     }

//     for (int i : vec2)
//         cout << i;
//     cout << endl;
// }

// int main()
// {
//     fasterio;

//     int t;
//     cin >> t;
//     while (t--)
//         solve();
// }

/**
 *    Author: saminulislamsami
 *    Created: 7/10/2025 || 3:38 AM
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
    int n;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < (2 * n) - 1; i += 2)
        cout << str[i];
    cout << endl;
}

int main()
{
    fasterio;
    int t;
    cin >> t;
    while (t--)
        solve();
}
