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
        int n, sum = 0, app = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i += 1)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        sort(arr, arr + n);
        for (int i = n - 1; i >= 0; i -= 1)
        {
            if (app + arr[i] <= sum / 2)
                app += arr[i];
            else
                continue;
        }

        if (sum % 2 == 0 && app == sum / 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}