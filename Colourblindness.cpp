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
        int n;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
        bool inc = false;

        for (int i = 0; i < n; i += 1)
        {

            if ((a[i] == 'R' && b[i] != 'R') || (b[i] == 'R' && a[i] != 'R'))
            {
                inc = true;
                break;
            }
        }
        if (inc)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}