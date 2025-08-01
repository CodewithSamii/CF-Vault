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
        int a, b, c;
        cin >> a >> b >> c;

        if (a != b && a == c)
            cout << b << endl;
        else if (b != a && b == c)
            cout << a << endl;
        else 
            cout << c << endl;
    }
}