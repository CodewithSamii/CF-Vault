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
        int n, operations = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i += 1)
            cin >> arr[i];
        int ones = count(arr, arr + n, 1);
        if (ones < ceil((double) n / 2))
        {
            for (int i = 0; i < n; i += 1)
            {
                if (arr[i] == -1)
                {
                    arr[i] = 1;
                    ones++;
                    operations++;
                }
                if (ones == ceil((double) n / 2))
                    break;
            }
        }
        int minusones = count(arr, arr + n, -1);
        if (minusones % 2 != 0)
            cout << operations + 1 << endl;
        else
            cout << operations << endl;
    }

    return 0;
}