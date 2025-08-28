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
        double a, b;
        cin >> a >> b;
        if (b != a && abs(b - a) <= 10)
            cout << 1 << endl;
        else
            cout << (long long int)ceil((abs(b - a) / 10)) << endl;
    }
}