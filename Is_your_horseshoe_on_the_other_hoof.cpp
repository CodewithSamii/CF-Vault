#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> arr;
    for (int i = 0; i < 4; i += 1)
    {
        int x;
        cin >> x;
        arr.insert(x);
    }
    cout << 4-arr.size() << endl;
}
