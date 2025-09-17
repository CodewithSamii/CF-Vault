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

    int n, a;
    cin >> n;
    cin >> a;
    set<int> st;
    for (int j = 0; j < a; j += 1)
    {
        int x;
        cin >> x;
        if (x > 0 && x <= n)
            st.insert(x);
    }
    int b;
    cin >> b;
    for (int j = 0; j < b; j += 1)
    {
        int x;
        cin >> x;
        if (x > 0 && x <= n)
            st.insert(x);
    }
    if (st.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}