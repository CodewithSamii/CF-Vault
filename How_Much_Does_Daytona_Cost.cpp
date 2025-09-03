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
        int n, k, maxl = 0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i += 1)
            cin >> arr[i];
        for (int i = 0; i < n; i += 1)
        {
            int p = count(arr, arr + n, arr[i]);
            if (p > maxl)
                maxl = arr[i];
        }
        if (maxl == k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}