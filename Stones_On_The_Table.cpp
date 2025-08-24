#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, count = 0;
    cin >> n;
    string word;
    cin >> word;

    for (int i = 0; i < (n - 1); i += 1)
    {
        if (word[i] == word[i + 1])
            count++;
    }
    cout << count << endl;
}