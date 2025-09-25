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
        vector<char> alpha = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
        vector<int> num = {1, 2, 3, 4, 5, 6, 7, 8};

        for (int i = 0; i < 8; i += 1)
        {
            if (alpha[i] != str[0])
            {
                cout << alpha[i];
                cout << str[1];
                cout << " ";
            }
        }
        for (int i = 0; i < 8; i += 1)
        {
            if (num[i] != (int) str[1] - 48)
            {
                cout << str[0];
                cout << num[i];
                cout << " ";
            }
        }
    }

    return 0;
}