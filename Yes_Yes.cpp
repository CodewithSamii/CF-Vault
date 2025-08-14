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
        string word;
        cin >> word;
        bool flag = true;
        if ((int)word[0] == 89 || (int)word[0] == 101 || (int)word[0] == 115)
        {
            for (int i = 0; i < (word.length() - 1); i += 1)
            {
                if ((int) word[i] - (int) word[i + 1] == -12 ||(int) word[i] - (int) word[i + 1] == -14 || (int) word[i] - (int) word[i + 1] == 26)
                    continue;
                else
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