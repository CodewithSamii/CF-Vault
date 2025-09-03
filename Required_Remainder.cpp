/// Status: Time limit exceed, not solved
/// Required O(t) solution

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, n;
        cin >> x >> y >> n;

        for (int i = n; i >= 0; i--)
        {
            if (i % x == y)
            {
                cout << i << endl;
                break;
            }
        }
    }
}
