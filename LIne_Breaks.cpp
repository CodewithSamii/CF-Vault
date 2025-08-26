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
        int n, k, count = 0;
        cin >> n >> k;
        string arr[n];
        for (int i = 0; i < n; i += 1)
            cin >> arr[i];
        int i = 0;
        while (k > 0)
        {
            k -= arr[i].size();
            if (k >= 0)
                count++;
            else
                break;
            i++;
        }
        cout << count << endl;
    }
}