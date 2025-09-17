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
        string s;
        cin >> s;

        int first = -1, last = -1, count = 0;
        for (int i = 0; i < (int)s.length(); i++)
        {
            if (s[i] == '1')
            {
                if (first == -1)
                    first = i;
                last = i;
            }
        }
        if (first != -1 && last != -1 && last > first)
        {
            for (int i = first + 1; i < last; i++)
            {
                if (s[i] == '0')
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}

