#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, a, b;
    double index = 100001.00000000;

    cin >> m >> n;

    for (int i = 0; i < m; i += 1)
    {
        cin >> a >> b;
        if (((double) a / b) < index)
            index = (double) a / b;
    }
    // cout << index << endl;
    cout << fixed << setprecision(8) << index * n << endl;
}