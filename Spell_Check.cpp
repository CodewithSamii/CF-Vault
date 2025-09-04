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
        string name;
        cin >> name;
        if ((int)name.length() != 5)
            cout << "NO" << endl;
        else
        {
            string target = "Timur";
            sort(name.begin(), name.end());
            sort(target.begin(), target.end());
            if (name == target)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}