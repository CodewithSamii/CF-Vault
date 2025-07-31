#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<string, int> freq;

    for (int i = 0; i < n; ++i)
    {
        string temp;
        cin >> temp;

        if (freq[temp] == 0)
        {
            cout << "OK\n";
        }
        else
        
        {
            cout << temp << freq[temp] << "\n";
        }

        freq[temp]++;
    }

    return 0;
}
