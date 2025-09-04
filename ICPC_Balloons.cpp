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
        int n;
        cin >> n;
        string problem;
        cin >> problem;
        set<char> st;
        for (int i = 0; i < n; i += 1)
            st.insert(problem[i]);
        cout << st.size() + n << endl;
    }
}