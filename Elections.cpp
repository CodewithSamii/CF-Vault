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
        long long a, b, c;
        cin >> a >> b >> c;
        long long max_val = max(a, max(b, c));
        int ok = (a == max_val) + (b == max_val) + (c == max_val);

        if (a == max_val && ok == 1)
            cout << 0 << ' ';
        else
            cout << (max_val - a + 1) << ' ';

        if (b == max_val && ok == 1)
            cout << 0 << ' ';
        else
            cout << (max_val - b + 1) << ' ';

        if (c == max_val && ok == 1)
            cout << 0 << ' ';
        else
            cout << (max_val - c + 1) << ' ';

        cout << endl;
    }
}
