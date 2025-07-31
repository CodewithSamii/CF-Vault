#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, count = 0;
    cin >> m >> n;
    int ml = m * n;
    for (int i = 1; i < ml; i +=2)
        count ++;
    cout << count << endl;
}