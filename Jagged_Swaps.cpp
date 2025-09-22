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
        vector<int> vec(n);
        for (int i = 0; i < n; i += 1)
            cin >> vec[i];
        vector<int> sorted = {vec.begin(), vec.end()};
        sort(sorted.begin(), sorted.end());

        // for (int i : sorted)
        //     cout << i << ' ';
        for (int j = 0; j < n - 1; j += 1)
        {
            for (int i = 1; i < n - j - 1; i += 1)
            {
                if ((vec[i - 1] < vec[i]) && (vec[i + 1] < vec[i]))
                    swap(vec[i], vec[i + 1]);
            }
        }

        if (vec == sorted)
            yes;
        else
            no;
        // for (int i : sorted)
        //     cout << i << ' ';
        // cout << endl;
        // cout << "Vec: " << endl;
        // for (int i : vec)
        //     cout << i << ' ';
    }

    return 0;
}