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
        int n, poison = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i += 1)
            cin >> arr[i];

        for (int i = 0; i < n; i += 1)
        {
            if (arr[i] == i + 1)
                poison++;
        }
        cout << (poison + 1) / 2 << endl;
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
//         int n, count = 0;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//             cin >> arr[i];

//         // Debug print the initial array
//         cout << "Initial array: ";
//         for (int i = 0; i < n; i++) cout << arr[i] << " ";
//         cout << "\n";

//         for (int i = 0; i < n; i++)
//         {
//             cout << "Checking i = " << i << ", arr[i] = " << arr[i] << ", expected = " << i + 1 << "\n";

//             if (arr[i] == i + 1)
//             {
//                 cout << "Swap triggered at i = " << i << "\n";
//                 if (i == 0)
//                 {
//                     swap(arr[i], arr[i + 1]);
//                     cout << "Swapped arr[" << i << "] and arr[" << i + 1 << "]\n";
//                 }
//                 else
//                 {
//                     swap(arr[i], arr[i - 1]);
//                     cout << "Swapped arr[" << i << "] and arr[" << i - 1 << "]\n";
//                 }
//                 count++;

//                 // Print array after swap to see effect
//                 cout << "Array after swap: ";
//                 for (int j = 0; j < n; j++) cout << arr[j] << " ";
//                 cout << "\n";
//             }
//         }
//         cout << "Total swaps: " << count << "\n";
//     }
// }
