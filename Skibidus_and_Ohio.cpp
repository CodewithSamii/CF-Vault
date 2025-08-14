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
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 1; i < (int)s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << 1 << endl;
        else
            cout << (int)s.size() << endl;
    }
}
