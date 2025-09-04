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
        string que;
        cin >> que;
        int p = que.length();

        vector<char> vec;
        for (int i = 0; i < p; i += 1)
            vec.push_back(que[i]);
        cout << *vec.begin();

        vec.erase(vec.begin());

        if (vec.size() > 1)
        {
            while (vec.size() != 1)
            {
                cout << *vec.begin();
                vec.erase(vec.begin());
                vec.erase(vec.begin());
            }
        }
        cout << *vec.begin();
        cout << endl;
    }
}