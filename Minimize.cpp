#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        vector<int> v;
        cin >> a >> b;

        for (int i = a; i <= b; i += 1)
            v.push_back((i - a) + (b - i));

        int result = *min_element(v.begin(), v.end());
        cout << result << endl;
    }
}