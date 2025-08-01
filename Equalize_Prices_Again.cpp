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
        long long n, sum = 0;
        cin >> n;

        long long arr[n];

        for (int i = 0; i < n; i += 1)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        cout << (sum + n - 1) / n << endl;
    }
}