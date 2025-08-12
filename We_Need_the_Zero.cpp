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
        bool index = false;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i += 1)
            cin >> arr[i];
        int i = 0, count = 0, x = 0;
        while (!index)
        {
            count ^= arr[i] ^ x;
            i++;
            if (i > (n - 1))
            {
                if (count == 0)
                {
                    /// Answer = x
                    index = true;
                    break;
                }
                else
                {
                    count = 0;
                    i = 0;
                    x++;
                }
            }
            if (x > 256)
                break;
        }
        if (index)
            cout << x << endl;
        else
            cout << -1 << endl;
    }
}