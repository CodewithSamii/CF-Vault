#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p;
    cin >> n >> p;
    string number = to_string(p);
    string sec_num;
    int j = 0;
    for (int i = number.length() - 1; i >= 0; i -= 1)
    {
        sec_num[j] = number[i];
        j++;
    }
    cout << n + (stoi(sec_num)) << endl;
}