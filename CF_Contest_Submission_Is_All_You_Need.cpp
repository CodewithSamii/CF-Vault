// /// Starting - 6: 10 AM
// /// Ending - 6 : 41 AM
// /// Duration - 31 Minutes

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
//         int arr[n];

//         for (int i = 0; i < n; i += 1)
//             cin >> arr[i];

//         for (int i = 0; i < n; i += 1)
//         {
//             if (arr[i-1] == 0){
//                 result += (arr[i] + 1);
//             }
//             else {
//                 if (arr[i] == 0)
//                     continue;
//                 else
//                     result += arr[i];
//             }
//         }

//         cout << result <<  "\n";
//     }
// }




#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long sum = 0;
        int cnt0 = 0;
 
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            sum += x;
            if(x == 0) 
                cnt0++;
        }
        cout << (sum + cnt0) << "\n";
    }
}
