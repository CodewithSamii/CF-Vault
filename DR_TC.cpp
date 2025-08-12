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
        int count = 0, n;
        cin >> n;

        vector<char> arr(n);
        for (int i = 0; i < n; i += 1)
            cin >> arr[i];

        // cout << "Start" << endl;
        // for (int i = 0; i < n; i += 1)
        //     cout << arr[i];
        // cout << "END" << endl;

        for (int i = 0; i < n; i += 1)
        {
            if (arr[i] == '0')
                arr[i] = '1';
            else if (arr[i] == '1')
                arr[i] = '0';
            for (int j = 0; j < n; j += 1)
            {
                if (arr[j] == '1')
                    count += (int)arr[j] - 48;
            }
            if (arr[i] == '0')
                arr[i] = '1';
            else if (arr[i] == '1')
                arr[i] = '0';
        }
        cout << count << endl;
    }
}