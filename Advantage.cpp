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
        int maximum = *max_element(vec.begin(), vec.end()), second_maximum = 0;

        if (*min_element(vec.begin(), vec.end()) == maximum)
            second_maximum = maximum;
        else if (count(vec.begin(), vec.end(), maximum) > 1)
            second_maximum = maximum;
        else
        {
            for (int i : vec)
            {
                if (i != maximum)
                    second_maximum = max(i, second_maximum);
            }
        }
        // debug(maximum);
        // debug(second_maximum);
        
        for (int i : vec)
        {
            if (i != maximum)
                cout << i - maximum << ' ';
            else
                cout << maximum - second_maximum << ' ';
        }
        cout << endl;
    }

    return 0;
}