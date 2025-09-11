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
        int arr[n];
        set<int> st;

        for (int i = 0; i < n; i += 1)
        {
            cin >> arr[i];
            st.insert(arr[i]);
        }
        // cout << "Number of element in the set: " << st.size() << endl << "Number of elements initially : " << n << endl;
        if (n == st.size())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}