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
        int n, digit;
        cin >> n >> digit;
        string num;
        cin >> num;

        int temp = n;
        for (int i = 0; i < n; i++)
        {
            if (num[i] - 48 < digit)
            {
                temp = i;
                break;
            }
        }

        for (int i = 0; i < temp; i++)
            cout << num[i];
        cout << digit;
        for (int i = temp; i < n; i++)
            cout << num[i];
        cout << endl;
    }
}
