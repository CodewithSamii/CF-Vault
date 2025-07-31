#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i += 1)
    {
        cin >> arr[i];
    }

    int max_value = *max_element(arr, arr + n);
    int min_value = *min_element(arr, arr + n);
    int count = 0;

    // cout << max_value << "  "  << min_value << endl;

    int x = find(arr, arr + n, max_value) - arr;
    int t; // rightmost min
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == min_value)
        {
            t = i;
            break;
        }
    }

    // cout << x << endl << t << endl;

    // for (int i = 0; i < n - 1; i += 1)
    // {
    //     if (arr[i] < arr[i + 1])
    //     {
    //         swap(arr[i], arr[i + 1]);
    //         if (arr[i] > arr[0]){
    //             swap(arr[0], arr[i]);
    //         }

    //     }
    //     if (arr[0] == max_value && arr[n - 1] == min_value)
    //         break;
    // }

    if (x < t)
        cout << x + ((n - 1) - t); /// n-1 is his detination. t is previous index number of minimum value and x is previous index of max value.
    else
        cout << (x + ((n - 1) - t)) - 1; ///When the max comes before the min (x < t)  no overlap, no problem. When the max comes after the min (x > t) , moving max to the front shifts the min one position left, so we need to subtract just 1, not 2. if overlap exists, then 2, but not now.
}



/*Cleaner Version: 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i += 1){
        cin >> arr[i];
    }

    int max_value = *max_element(arr, arr + n);
    int min_value = *min_element(arr, arr + n);
    int t, count = 0;

    int x = find(arr, arr + n, max_value) - arr;

    for (int i = n - 1; i >= 0; i--){
        if (arr[i] == min_value){
            t = i;
            break;
        }
    }
    if (x < t)
        cout << x + ((n - 1) - t); 
    else
        cout << (x + ((n - 1) - t)) - 1; 
}
*/