/// Start : 7: 59 PM
/// End : 8 : 03 PM
/// Duration : 4 Minutes

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
        int a, b ,c;
        cin >> a >> b >> c;

        if (a + b == c) 
            cout << '+' << endl;
        if (a - b == c)
            cout << '-' << endl;

    }
}