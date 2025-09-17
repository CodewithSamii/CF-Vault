// /// Status : Unsolved

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k, maxl = 0;
//         cin >> n >> k;
//         int arr[n];
//         for (int i = 0; i < n; i += 1)
//             cin >> arr[i];
//         for (int i = 0; i < n; i += 1)
//         {
//             int p = count(arr, arr + n, arr[i]);
//             if (p > maxl)
//                 maxl = arr[i];
//         }
//         if (maxl == k)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
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
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i += 1)
            cin >> vec[i];
        if (find(vec.begin(), vec.end(), k) != vec.end())
            yes;
        else
            no;
    }

    return 0;
}