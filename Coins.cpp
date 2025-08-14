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
        long long int n, k; ///ll specifier, cz they required 10^18 amount of input, otherwise overflow
        cin >> n >> k;
        if (k != 0 && k != 2) /// k = 0 : Runtime error cz (n % k = n % 0 = invalid) ; k != 2, cz problem statement says
        {
            if (n % 2 == 0 || n % k == 0) /// if divisible by any of denominations
                cout << "YES" << endl;
            else if ((n % 2 == 0 && k % 2 == 0) || (n % 2 != 0 && k % 2 != 0)) ///If both k & n are even or odd, then ok
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}