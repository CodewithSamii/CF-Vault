/*#include <bits/stdc++.h>
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
        if ((n - 1) % 3 == 0 || (n + 1) % 3 == 0)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
}*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        int cnt = 0;
        for (int i = 0; i < n; ++i)
            if (a[i] > a[(i + 1) % n])
                ++cnt;
        if (cnt <= 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
