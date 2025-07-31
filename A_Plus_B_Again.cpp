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
        int count = 0, len = num.length();

        for (int i = 0; i < len; i +=1 )
            count += num[i] - 48;
        cout << count << endl;
    }
}