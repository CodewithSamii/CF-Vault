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
        string str;
        cin >> str;
        bool status = true;
        vector<char> poison;
        for (int i = 0; i < n; i += 1)
        {
            if (find(poison.begin(), poison.end(), str[i]) != poison.end() && str[i] != str[i - 1])
            {
                status = false;
                break;
            }
            poison.push_back(str[i]);
        }
        if (status)
            yes;
        else
            no;
    }

    return 0;
}