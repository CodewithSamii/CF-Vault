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
        int a, b, c, d, count = 0;
        cin >> a >> b >> c >> d;

        if (b > a) count ++;
        if (c > a) count ++;
        if (d > a) count ++;

        cout << count << endl;
    }
}