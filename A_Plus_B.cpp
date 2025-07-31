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
        int count = 0;

        int len = num.length();

        vector<char> v;
        for (int i = 0; i < len; i += 1)
        {
            if (num[i] != '+')
                v.push_back(num[i]);
        }

        //     for (char i : v){
        //     cout << i << "  ";
        // }
        for (char i : v)
        {
            count += i - 48;
        }

        cout << count << endl;
    }
}