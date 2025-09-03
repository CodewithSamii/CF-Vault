
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, count = 0;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i += 1)
        cin >> vec[i];
    for (int i = 0; i < n; i += 1)
    {
        if (vec[i] < *max_element(vec.begin(), vec.end()))
            count += *max_element(vec.begin(), vec.end()) - vec[i];
    }
    cout << count << endl;
}
