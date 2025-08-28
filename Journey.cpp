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
        long long int n, a, b, c, days = 0, day_left = 0;
        cin >> n >> a >> b >> c;

        long long cycle = a + b + c;

        if (n > cycle)
        {
            days = (n / cycle) * 3;
            day_left = n % cycle;

            // If n is exactly multiple of cycle, day_left = 0 → no extra day needed
            if (day_left == 0)
                day_left = cycle;

            long long day_km[3] = {a, b, c};
            int i = 0;
            while (day_left > 0)
            {
                day_left -= day_km[i % 3];
                days++;
                i++;
            }
        }
        else
        {
            long long day_km[3] = {a, b, c};
            int i = 0;
            while (n > 0)
            {
                n -= day_km[i % 3];
                days++;
                i++;
            }
        }
        cout << days << endl;
    }
}
