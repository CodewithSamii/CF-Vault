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
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i += 1)
            cin >> arr[i];
        map<int, int> mp;
        for (int i = 0; i < n; i += 1)
        {
            mp[arr[i]]++;
            if (mp[arr[i]] == 3)
            {
                ans = arr[i];
                break;
            }
        }
        if (ans > 0)
            cout << ans << endl;
        else
            cout << "-1" << endl;
    }
}


