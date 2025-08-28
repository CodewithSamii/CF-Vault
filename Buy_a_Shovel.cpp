#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, r;
    cin >> k >> r;

    for (int i = 1;; i += 1)
    {
        int last = (i * k) % 10;
        if (last == 0 || last == r)
        {
            cout << i << endl;
            break;
        }
    }
}
