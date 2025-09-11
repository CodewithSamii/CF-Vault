#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, n;
        cin >> a >> b >> c >> n;

        long long mx = max({a, b, c});
        long long want = (mx - a) + (mx - b) + (mx - c);

        if (n >= want && (n - want) % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
