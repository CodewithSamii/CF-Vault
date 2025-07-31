#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string num;
        cin >> num;

        int len = num.length();
        int num1 = 0, num2 = 0;

        // cout << len << endl;
        for (int i = 0; i < (len / 2); i += 1)
            num1 += num[i] - 48;

        for (int i = len - 1; i >= (len / 2); i -= 1)
            num2 += num[i] - 48;

        // cout << num1 << endl
        //      << num2 << endl;

        if (num1 == num2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
