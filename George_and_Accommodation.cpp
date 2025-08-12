#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, q, count = 0;
    cin >> n;
    
    for (int i = 0; i < n; i += 1)
    {
        cin >> p >> q;
        if (q-p >= 2)
            count += 1;
    }
    cout << count << endl;
}