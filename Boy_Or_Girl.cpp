#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool index = true;
    string name;
    cin >> name;

    bool found = true;

    int r = name.length();
    vector<char> v;

    for (int i = 0; i < r; i += 1)
    {
        for (char j : v)
        {
            if (name[i] == j)
            {
                found = false;
                break;
            }
        }
        if (found)
            v.push_back(name[i]);
        found = true;
    }

    // cout << "I am here";
    // v[0] = 's';
    // cout << v[0];

    // for (char i : v)
    //     cout << i << " ";

    int r2 = v.size();

    // cout << r2 << endl;
    if (r2 % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}
