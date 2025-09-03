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
        int k;
        cin >> k;
        int count = 0, i = 1, ans = 0;
        while (count < k)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                ans = i;
                count++;
            }
            i++;
        }
        cout << ans << endl;
    }
}
