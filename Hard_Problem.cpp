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
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int sec_row = m;
        int seat = 0;
        if (a <= m)
        {
            seat += a;
            m = m - a;
        }
        else
        {
            seat += m;
            m = 0;
        }
        if (b <= sec_row)
        {
            seat += b;
            sec_row = sec_row - b;
        }
        else
        {
            seat += sec_row;
            sec_row = 0;
        }
        if (c <= m + sec_row)
            cout << c + seat << endl;
        else
            cout << m + sec_row + seat << endl;
        // cout << m << endl
        //      << sec_row << endl
        //      << seat << endl;
    }
}