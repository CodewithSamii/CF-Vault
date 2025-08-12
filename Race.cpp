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
        bool status = false;
        int a, x, y;
        cin >> a >> x >> y;
        int mx = max(x, y);
        int mn = min(x, y);
        for (int i = mn; i <= mx; i += 1)
        {
            if ((abs(i - x) < abs(a - x)) && (abs(i - y) < abs(a - y)))
            {
                status = true;
                break;
            }
        }
        if (status)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}