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
        string str;
        cin >> str;
        char ch;
        if (str.size() == 1 || count(str.begin(), str.end(), str[0]) == str.size())
            no;
        else
        {
            for (int i = 1; i < (int)str.length(); i += 1)
            {
                if (str[i] != str[i - 1])
                {
                    ch = str[i];
                    str.erase(i, 1);
                    break;
                }
            }
            yes;
            cout << ch;
            cout << str << endl;
        }
    }

    return 0;
}