#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ok
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        bool found = false;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i += 1)
        
            cin >> arr[i];
        sort(arr, arr + n);

        if (n == 1)
            cout << "YES" << endl;
        else
        {
            for (int i = 0; i < (n - 1); i += 1)
            {
                if (abs(arr[i] - arr[i + 1]) <= 1)
                    continue;
                else
                {
                    found = true;
                    break;
                }
            }
            if (found)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}