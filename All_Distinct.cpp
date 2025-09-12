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
        int a;
        cin >> a;
        int arr[a];
        set<int> st;
        for (int i = 0; i < a; i += 1)
        {
            int x;
            cin >> x;
            arr[i] = x;
            st.insert(x);
        }

        if ((a % 2 != 0 && st.size() % 2 == 0) || (a % 2 == 0 && st.size() % 2 != 0))
            cout << st.size() - 1 << endl;
        else
            cout << st.size() << endl;
    }

    return 0;
}