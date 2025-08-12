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
        int n, k, count = 0;
        cin >> n >> k;
        if (n % 2 != 0)
            n -= k;
        else
            n -= k - 1;
        // while (n > k)
        // {
        //     n -= k - 1;
        //     count++;
        // }
        count = (n / (k - 1));
        n -= count * (k - 1);
        if (n > 0)
            count++;
        count += 1;

        cout << count << endl;
    }
}