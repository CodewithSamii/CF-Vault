
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
        int n, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i += 1)
            cin >> arr[i];
        int max_val = *min_element(arr, arr + n);
        for (int i = 0; i < n; i += 1)
        {
            if (arr[i] != max_val)
                count += arr[i] - max_val;
        }
        cout << count << endl;
    }
}
