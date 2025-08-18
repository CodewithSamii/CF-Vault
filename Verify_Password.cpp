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
        string password;
        cin >> password;

        multiset<char> checker;
        for (int i = 0; i < password.size(); i += 1)
            checker.insert(password[i]);
        vector<char> conv(checker.begin(), checker.end());

        bool flag = true;
        for (int i = 0; i < password.size(); i += 1)
        {
            if (password[i] == conv[i])
                continue;
            else
            {
                flag = false;
                break;
            }
        }

        if (!flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

        // for (char ch : conv)
        //     cout << ch << " ";
    }
}