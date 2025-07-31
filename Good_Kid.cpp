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
        int n, result = 1, mini = 0, temp = 0;
        bool twozero = false, onezero = false;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i += 1)
            cin >> v[i];

        int zero_count = count(v.begin(), v.end(), 0);
        if (zero_count >= 2)
            twozero = true;
        else if (zero_count == 1)
            onezero = true;

        if (onezero)
        {
            for (int i : v)
            {
                if (i != 0)
                    result *= i;
                else
                    result *= 1;
            }
        }

        else if (twozero)
            result = 0;
            
        else
        {
            mini = *min_element(v.begin(), v.end());
            temp = mini;
            v.erase(find(v.begin(), v.end(), mini));
            temp += 1;

            v.push_back(temp);

            for (int i : v)
                result *= i;
        }

        cout << result << endl;
    }
}