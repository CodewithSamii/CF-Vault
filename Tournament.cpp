#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, j, k;
        cin >> n >> j >> k;
        int arr[n];
        for (int i = 0; i < n; i += 1)
            cin >> arr[i];

        // int fullboro = *max_element(arr, arr + n);

        int suto = 0, kick = (n - k);
        int boro = 0;

        for (int i = 0; i < n; i += 1)
        {
            if (i != (j - 1) && arr[i] >= arr[j - 1])
                boro += 1;
        }

        for (int i = 0; i < n; i += 1)
        {
            if (i != (j - 1) && arr[i] <= arr[j - 1])
                suto += 1;
        }

        cout << "suto -> " << suto << endl;
        cout << "boro -> " << boro << endl;
        // cout << "fullboro -> " << fullboro << endl;
        cout << "kick -> " << kick << endl;

        int s = (int)ceil(boro / 2.0);

        cout << "s -> " << s << endl;
        if ((kick - suto) <= s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}