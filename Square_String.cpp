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
        string input;
        vector<char> first, last;
        cin >> input;
        bool flag = true;

        int len = input.length();
        if (len % 2 == 0)
        {
            for (int i = 0; i < len / 2; i += 1)
                first.push_back(input[i]);

            for (int i = len / 2; i < len; i += 1)
                last.push_back(input[i]);

            for (int i = 0; i < len / 2; i += 1)
            {
                if (first[i] != last[i])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}