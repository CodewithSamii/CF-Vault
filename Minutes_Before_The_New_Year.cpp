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
        int hour, minute;
        cin >> hour >> minute;
        cout << ((23 - hour) * 60) + 60  - minute << endl;
    }
}