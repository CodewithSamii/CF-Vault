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
        bool found = false;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i += 1)
            cin >> arr[i];
        int zero = 3, three = 1, two = 2, one = 1, five = 1;
        for (int i = 0; i < n; i += 1)
        {
            if (arr[i] == 3 && three > 0)
                three--;
            else if (arr[i] == 0 && zero > 0)
                zero--;
            else if (arr[i] == 2 && two > 0)
                two--;
            else if (arr[i] == 1 && one > 0)
                one--;
            else if (arr[i] == 5 && five > 0)
                five--;
            if (zero == 0 && one == 0 && two == 0 && three == 0 && five == 0)
            {
                cout << i + 1 << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << 0 << endl;
    }
}