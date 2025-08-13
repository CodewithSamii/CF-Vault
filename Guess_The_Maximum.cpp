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
        for (int i = 0; i < n; i += 1)
            cin >> arr[i];
        vector<int> answer;

        for (int i = 0; i < (n - 1); i += 1)
        {
            answer.push_back(*max_element(arr, (arr+ n) - i));
        }

        // for (int i : answer)
        //     cout << i << "  ";

        cout << *min_element(answer.begin(), answer.end()) - 1 << endl;
    }
}