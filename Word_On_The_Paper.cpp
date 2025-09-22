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
        vector<char> vec;
        for (int i = 0; i < 8; i += 1)
        {
            for (int j = 0; j < 8; j += 1)
            {
                char ch;
                cin >> ch;
                if (ch != '.')
                    vec.push_back(ch);
            }
        }
        for (char ch : vec) cout << ch ;
        cout << endl;
        vec.clear();
    }

    return 0;
}