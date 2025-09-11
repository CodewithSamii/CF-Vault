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
        int x, final;
        cin >> x >> final;
        for (int i = 0; i < x; i += 1)
            final *= 2;
        cout << final << endl;
    }
}
