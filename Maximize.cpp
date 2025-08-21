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
        int x;
        cin >> x;
        set<int> answer;
        for (int i = 1; i <= (x - 1); i += 1)
        {
            if (x % i == 0)
                answer.insert(i);
        }
        cout << x - *answer.begin() << endl;
    }
}