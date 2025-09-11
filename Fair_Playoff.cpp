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
        vector<int> teams(4);
        for (int i = 0; i < 4; i += 1)
            cin >> teams[i];
        set<int> two;
        two.insert(max(teams[0], teams[1]));
        two.insert(max(teams[2], teams[3]));
        two.insert(*max_element(teams.begin(), teams.end()));
        teams.erase(max_element(teams.begin(), teams.end()));
        two.insert(*max_element(teams.begin(), teams.end()));
        teams.erase(max_element(teams.begin(), teams.end()));

        if (two.size() == 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}