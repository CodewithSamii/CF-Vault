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
        int n, k, gold = 0, donation = 0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i += 1)
            cin >> arr[i];

        for (int i = 0; i < n; i += 1)
        {
            if (arr[i] >= k)
                gold += arr[i];
            else if (arr[i] == 0 && gold > 0)
            {
                gold--;
                donation++;
            }
        }
        cout << donation << endl;
    }
}

// 9 3
// 0 8 5 9 7 7 5 9 2