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
        int n, cnt = 0;
        cin >> n;
        vector<int> vec(n);
        iota(vec.begin(), vec.end(), 1);
        for (int i = 0; i < n; i += 1)
        {
            for (int j = 0; j < n; j += 1)
            {
                if (i != j)
                {
                    int sum = vec[i] + vec[j];
                    for (int k = 0; k < n; k += 1)
                    {
                        if (vec[k] == sum)
                        {
                            cnt++;
                            vec.erase(vec.begin() + i);
                            vec.erase(vec.begin() + j);
                            vec.erase(find(vec.begin(), vec.end(), sum));
                            n -= 3;
                            break;
                        }
                    }
                }
            }
        }
        cout << cnt << endl;
    }
}