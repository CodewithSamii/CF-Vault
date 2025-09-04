#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, i = 0, leftCount = 0, leftTotal = 0, rightTotal = 0, rightCount = 0;
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i += 1)
        cin >> vec[i];

    for (int i = 0; i < n; i += 1)
    {
        if (leftTotal + vec[i] <= k)
        {
            leftTotal += vec[i];
            leftCount++;
        }
        else
            break;
    }

    for (int i = n - 1; i >= 0; i -= 1)
    {
        if (rightTotal + vec[i] <= k)
        {
            rightTotal += vec[i];
            rightCount++;
        }
        else
            break;
    }

    cout << max(leftCount, rightCount) << endl;
}
