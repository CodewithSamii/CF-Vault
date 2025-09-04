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
        int n;
        cin >> n;
        string binary;
        cin >> binary;
        deque<char> dq;
        for (int i = 0; i < n; i += 1)
            dq.push_back((int)binary[i] - 48);

        while (!dq.empty() && ((dq.front() == 0 && dq.back() == 1) || (dq.front() == 1 && dq.back() == 0)))
        {
            dq.pop_back();
            dq.pop_front();
        }
        cout << dq.size() << endl;
    }
}