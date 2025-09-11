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
        vector<int> a(n);
        for (int i = 0; i < n; i += 1)
            cin >> a[i];

        if (count(a.begin(), a.end(), a[0]) == n)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            sort(a.begin(), a.end());
            cout << a.back() << ' ';

            for (int i = 0; i < (n - 1); i += 1)
                cout << a[i] << ' ';
            cout << endl;
        }
    }
}
