// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int index1 = 0, index2 = 0, cmt = 0, last = 0, a, b, c, d;
//     cin >> a >> b >> c >> d;
//     int arr[4] = {a, b, c, d};

//     int maxVal = *max_element(arr, arr + 4);

//     for (int i = 0; i < maxVal; i += 1)
//     {
//         for (int j = 0; j < maxVal; j += 1)
//         {
//             if (i + j == arr[i] | i + j == arr[i + 1] || i + j == arr[i + 2] || i + j == arr[i + 3])
//             {
//                 index1 = i;
//                 index2 = j;

//                 // cout << index2 << endl;
//                 for (int k = 0; k < 15; k += 1)
//                 {
//                     if (i + j + k == arr[k] || i + j + k == arr[k + 1] || i + j + k == arr[k + 2] || i + j + k == arr[k + 3])
//                     {
//                         for (int t = 0; t < 3; t += 1)
//                         {
//                             if (arr[i] == index1 || arr[i] == index2)
//                             {
//                                 cmt += 1;
//                             }
//                         }
//                         last = i + j + k;
//                         goto end;
//                     }
//                 }
//             }
//         }
//     }
// end:
//     if (cmt > 2)
//         cout << index1 << index2 << last;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;
//     vector<int> arr = {a, b, c, d};
//     int maximum = *max_element(arr.begin(), arr.end());

//     // cout << maximum << endl;

//     for (int i = 1; i <= 4; i += 1)
//     {
//         for (int j = 1; j <= 4; j += 1)
//         {
//             for (int k = 1; k <= 4; k += 1)
//             {
//                 if (i + j == arr[k] || i + j == arr[k + 1] || i + j == arr[k + 2] || i + j == arr[k + 3])
//                 {
//                     arr.erase(arr.begin());
//                     if (j + k == arr[k] || j + k == arr[k + 1] || j + k == arr[k + 2])
//                     {
//                         arr.erase(arr.begin());
//                         if (i + k == arr[k] || i + k == arr[k + 1])
//                         {
//                             arr.erase(arr.begin());
//                             if (i + k + j == arr[k])
//                             {
//                                 cout << i << j << k << endl;
//                                 return 0;
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> x(4);
    for (int i = 0; i < 4; i++) {
        cin >> x[i];
    }

    sort(x.begin(), x.end());

    int a = x[3] - x[2]; 
    int b = x[3] - x[1]; 
    int c = x[3] - x[0]; 

    cout << a << " " << b << " " << c << endl;
}