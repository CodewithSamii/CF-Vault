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
        int n, count = 0;
        cin >> n;

        deque<int> dq;
        for (int i = 9; i >= 1; i -= 1)
        {
            if (i + count > n)
                continue;
            else if (i + count == n)
            {
                dq.push_front(i);
                break;
            }
            else
            {
                dq.push_front(i);
                count += i;
            }
        }
        for (int i : dq)
            cout << i;
        cout << endl;
    }

    return 0;
}