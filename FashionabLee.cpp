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
        long long n;
        cin >> n;
        if (n % 4 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
