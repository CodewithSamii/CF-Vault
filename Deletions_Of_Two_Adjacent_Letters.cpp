


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
        cin >> ch;
        bool found = false;
        for (int i = 0; i < str.size(); i += 1)
        {
            if (str[i] == ch)
            {
                int left = i;
                int right = str.size() - i - 1;
                if (left % 2 == 0 && right % 2 == 0)
                {
                    yes;
                    found = true;
                    break;
                }
            }
        }
        if (!found)
            no;
    }

    return 0;
}

