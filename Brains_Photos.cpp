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

    int n, m;
    cin >> n >> m;
    vector<char> vec(n * m);
    int k = 0;
    for (int i = 0; i < m; i += 1)
    {
        for (int j = 0; j < n; j += 1)
        {
            cin >> vec[k];
            k++;
        }
    }
    bool poison = false;
    // for (char ch : vec) cout << ch << ' ';
    for (char ch : vec)
    {
        if (ch == 'C' || ch == 'M' || ch == 'Y')
        {
            poison = true;
            break;
        }
    }
    if (poison)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;
    return 0;
}

