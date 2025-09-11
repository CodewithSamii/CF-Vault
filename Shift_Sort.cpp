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
        int n, ans = 0;
        string str;
        cin >> n >> str;

        int a = 0;
        for (int i = 0; i < n; i += 1)
        {
            if (str[i] == '0')
                a++;
        }

        for (int i = 0; i < a; i += 1)
        {
            if (str[i] == '1')
                ans++;
        }

        cout << ans << endl;
    }
}
