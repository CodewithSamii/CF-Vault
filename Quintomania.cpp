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
        int arr[n];
        for (int i = 0; i < n; i += 1)
            cin >> arr[i];
        bool index = true;

        for (int i = 0; i < n - 1; i += 1)
        {
            if (abs(arr[i] - arr[i + 1]) == 5 || abs(arr[i] - arr[i + 1]) == 7)
                continue;
            else
            {
                index = false;
                break;
            }
        }
        if (index)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}