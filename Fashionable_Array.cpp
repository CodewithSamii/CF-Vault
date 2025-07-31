#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        if ((arr[0] + arr[n - 1]) % 2 == 0)
        {
            cout << 0 << endl;
            continue;
        }

        int left = 0, right = n - 1;
        int removeLeft = 0;
        while (left < right && (arr[left] + arr[right]) % 2 != 0)
        {
            left++;
            removeLeft++;
        }

        left = 0, right = n - 1;
        int removeRight = 0;
        while (right > left && (arr[left] + arr[right]) % 2 != 0)
        {
            right--;
            removeRight++;
        }

        cout << min(removeLeft, removeRight) << endl;
    }
}


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     bool found1 = false, found2 = false;
//     int count1 = 0, count2 = 0;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i += 1)
//             cin >> arr[i];
//         int maxVal = *max_element(arr, arr + n);
//         int minVal = *min_element(arr, arr + n);

//         sort(arr, arr+n);
//         // vector <int> v;
//         // for (int i = 0; i < n ; i +=1)
//         // {
//         //     v.push_back(arr[i]);
//         // }

//         // for (int i = 0; i < n ; i +=1){
//         //     cout << arr[i];
//         // }
//         for (int i = 1; i < n - 1; i += 1)
//         {
//             int c = arr[i] + maxVal;
//             count1++;
//             if (c % 2 == 0){
//                 found1 = true;
//                 goto mid;
//             }
//         }

//     mid:
//         for (int i = (n - 2); i > 1; i -= 1)
//         {
//             int c = arr[i] + minVal;
//             count2++;
//             if (c % 2 == 0){
//                 found2 = true;
//                 goto end;
//             }
//         }
//     end:
//         if (!found1 && !found2)
//         {
//             if (count1 > count2)
//                 cout << count1 << endl;
//             else
//                 cout << count2 << endl;
//         }
//         else
//             cout << 0 << endl;
//     }
// }
