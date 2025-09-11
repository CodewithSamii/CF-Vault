/// Status : Unsolved

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool p1composite = false, p2composite = false;
    double half = (double)n / 2.0;
    int p1;
    int p2;
    int ans1, ans2;
    if (n % 2 != 0)
    {
        p1 = floor(half);
        p2 = ceil(half);
    }
    else
    {
        p1 = floor(half) - 1;
        p2 = ceil(half) + 1;
    }

    while (p1--)
    {
        for (int i = 2; i < p1; i += 1)
        {
            if (p1 % i == 0)
            {
                p1composite = true;
                ans1 = p1;
                break;
            }
        }
        if (p1composite)
        {
            for (int i = 2; i < p2; i += 1)
            {
                if (p2 % i == 0)
                {
                    p2composite = true;
                    ans2 = p2;
                    break;
                }
            }
            if (p2composite && (ans1 + ans2 == (int)half))
                break;
        }
    }
    if (p1composite && p2composite)
        cout << ans1 << ' ' << ans2 << endl;
}