

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

        vector<int> a(n);
        long long total = 0;
        int negative = 0, minAbs = INT_MAX;

        for (int i = 0; i < n; i+=1)
        {
            cin >> a[i];
            if (a[i] < 0) negative++;
            int absVal = abs(a[i]);
            total += absVal;
            minAbs = min(minAbs, absVal);
        }

        if (negative % 2 == 0)
            cout << total << endl;
        else
            cout << total - 2 * minAbs << endl;
    }
}


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, result = 0;
//         cin >> n;
//         vector<int> arr(n);

//         for (int i = 0; i < n; i += 1)
//             cin >> arr[i];

//         for (int i = 1; i < (n - 1); i += 1)
//         {
//             if (arr[i] < 0 && arr[i + 1] < 0)
//             {
//                 result += arr[i] + (arr[i] * 2);
//                 result += arr[i + 1] + (arr[i + 1] * 2);
//                 arr.erase(arr.begin() + i);
//                 arr.erase(arr.begin() + i + 1);
//                 i += 1;
//             }

//             else if (arr[i] < 0 && arr[i - 1] < 0)
//             {
//                 result += arr[i] + (arr[i] * 2);
//                 result += arr[i - 1] + (arr[i - 1] * 2);
//                 arr.erase(arr.begin() + i);
//                 arr.erase(arr.begin() + i - 1);
//             }

//             else if (arr[i] < 0 && arr[i + 1] > 0)
//             {
//                 if (arr[i + 1] - (arr[i + 1] * 2) > arr[i])
//                 {
//                     result += arr[i + 1];
//                     result -= arr[i] - (arr[i] * 2);
//                     arr.erase(arr.begin() + i + 1);
//                     i += 1;
//                 }
//                 else
//                     result -= arr[i];
//             }

//             else if (arr[i] < 0 && arr[i - 1] > 0)
//             {
//                 if (arr[i - 1] - (arr[i - 1] * 2) > arr[i])
//                 {
//                     result += arr[i - 1];
//                     result -= arr[i] - (arr[i] * 2);
//                     arr.erase(arr.begin() + i - 1);
//                 }
//                 else
//                     result -= arr[i];
//             }

//             else if (arr[i] > 0 && arr[i + 1] > 0 && arr[i - 1] > 0)
//                 result += arr[i];
//         }
//         cout << result << endl;
//     }
// }
