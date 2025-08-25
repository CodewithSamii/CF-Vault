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
        int n, multa = 1;
        cin >> n;
        string number = to_string(n);
        int len = number.length();
        vector<int> collection;
        for (int i = 0; i < len; i += 1)
        {
            int cur = (n / multa) % 10;
            if (cur != 0)
                collection.push_back(cur * multa);
            multa *= 10;
        }
        cout << collection.size() << endl;
        for (int i = 0; i < (int)collection.size(); ++i)
        {
            if (i)
                cout << " ";
            cout << collection[i];
        }
        cout << endl;
    }
}
