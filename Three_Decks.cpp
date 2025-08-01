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
        int a, b, c;
        // bool found = false;
        cin >> a >> b >> c;
        // int diff = b - a;

        // for (int i = 0; i < diff; i += 1)
        // {
        //     if (c > b)
        //     {
        //         a++;
        //         c--;
        //     }
        //     else
        //     {
        //         cout << "No" << endl;
        //         found = true;
        //         break;
        //     }
        // }

        if ((b - a) <= (c - b))
        {
            int var = (c - (b-a)) - b;
            if (var % 3 == 0)
                cout << "YES" << endl;
            else if (var % 3 != 0)
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}