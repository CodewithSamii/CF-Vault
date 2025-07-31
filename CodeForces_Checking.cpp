#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string cf = "codeforces";
    while (t--)
    {
        char ch;
        cin >> ch;
        bool found = false;
        for (int i = 0; i < 10; i += 1)
        {
            if (cf[i] == ch)
            {
                found = true;
                break;
            }
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
