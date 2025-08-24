#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d, e, count = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    for (int i = 1; i <= e; i += 1)
    {
        if (i % a != 0 && i % b != 0 && i % c != 0 && i % d != 0)
            count++;
    }
    cout << e - count << endl;
}
