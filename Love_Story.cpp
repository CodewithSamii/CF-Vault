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
        int count = 0;
        // vector<char> vec = {'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};
        string que;
        cin >> que;
        if (que[0] != 'c')
            count++;
        if (que[1] != 'o')
            count++;
        if (que[2] != 'd')
            count++;
        if (que[3] != 'e')
            count++;
        if (que[4] != 'f')
            count++;
        if (que[5] != 'o')
            count++;
        if (que[6] != 'r')
            count++;
        if (que[7] != 'c')
            count++;
        if (que[8] != 'e')
            count++;
        if (que[9] != 's')
            count++;

        cout << count << endl;
    }
}