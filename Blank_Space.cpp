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
        int n, cons = 0, ans = 0;
        cin >> n;
        int arr[n];
        // cout << "I Am Here 0" << endl;
        for (int i = 0; i < n; i += 1)
            cin >> arr[i];
        // cout << "I Am Here 1" << endl;
        for (int i = 0; i < n; i += 1)
        {
            if (arr[i] == 0)
            {
                cons++;
                ans = max(cons, ans);
            }
            else
                cons = 0;
            // cout << "I Am Here " << i << endl;
        }
        // cout << "I Am Here 2" << endl;
        cout << ans << endl;
    }
}
