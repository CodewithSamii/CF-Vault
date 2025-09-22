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

// int main()
// {
//     fasterio;

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c, countA = 0, countB = 0;
//         cin >> a >> b >> c;

//         for (int i = 0; i < a; i += 1)
//         {
//             int x;
//             cin >> x;
//             if (x < c)
//                 countA++;
//         }
//         for (int i = 0; i < b; i += 1)
//         {
//             int x;
//             cin >> x;
//             if (x < c)
//                 countB++;
//         }
//         cout << countA * countB << endl;
//     }

//     return 0;
// }

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, count = 0;
        cin >> a >> b >> c;
        vector<int> vecA(a), vecB(b);
        for (int i = 0; i < a; i += 1)
            cin >> vecA[i];
        for (int i = 0; i < b; i += 1)
            cin >> vecB[i];
        for (int i = 0; i < a; i += 1)
        {
            for (int j = 0; j < b; j += 1)
            {
                if (vecA[i] + vecB[j] <= c)
                    count++;
            }
        }
        cout << count << endl;
    }
}
