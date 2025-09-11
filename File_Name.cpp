
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    string word;
    cin >> word;
    int len = word.length();

    for (int i = 0; i < (len - 2); i += 1)
    {
        if (word[i] == 'x' && word[i + 1] == 'x' && word[i + 2] == 'x')
            cnt++;
    }
    cout << cnt << endl;
}