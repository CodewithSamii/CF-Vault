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
        int b, c, h;
        cin >> b >> c >> h;
        if ((b - 1) <= (c + h))
            cout << b + (b - 1) << endl;
        else
            cout << 2 * (c + h) + 1 << endl; /// (c + h) + (c + h + 1);
    }
}