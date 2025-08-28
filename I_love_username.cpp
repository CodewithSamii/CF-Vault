#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int amaze = 0;
    int cur_min = arr[0], cur_max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > cur_max)
        {
            amaze++;
            cur_max = arr[i];
        }
        else if (arr[i] < cur_min)
        {
            amaze++;
            cur_min = arr[i];
        }
    }

    cout << amaze << endl;
}
