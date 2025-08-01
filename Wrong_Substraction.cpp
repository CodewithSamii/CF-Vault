#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    string n;
    cin >> n >> k;

    int num = stoi(n);
    for (int i = 0; i < k; i++)
    {
        if (num % 10 == 0)
            num /= 10;
        else
            num -= 1;
    }

    cout << num << endl;
}
