// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int a, b, x, y, count = 0;
//         cin >> a >> b >> x >> y;
//         if (a == b)
//             cout << 0 << endl;

//         else if (a % 2 == 0)
//         {
//             if (a > b)
//                 cout << -1 << endl;
//         }

//         else
//         {
//             if ((a - 1) > b)
//                 cout << -1 << endl;
//         }

//         /// IF POSSIBLE :
//         // cout << "I am here" << endl;
//         while (a != b)
//         {
//             if (x > y )
//             {

//                 if (b - (a ^ 1) > (b - a))
//                 {
//                     a ^= 1;
//                     count += y;
//                 }
//                 else
//                 {
//                     a += 1;
//                     count += x;
//                 }
//             }
//             else
//             {
//                 a += 1;
//                 count += x;
//             }
//         }
//         cout << count << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    end:
    while (t--)
    {
        int a, b, x, y, ans = 0;
        cin >> a >> b >> x >> y;

        if (a > b)
        {
            if (a % 2 != 0 && b == (a-1))
            {
                cout << y << endl;
                goto end;
            }
            else
            {
                cout << -1 << endl;
                goto end;
            }
        }
        else if (a == b)
        {
            cout << 0 << endl;
            goto end;
        }
        else
        {
            if (x <= y)
            {
                cout << (b - a) * x << endl;
                goto end;
            }
            else
            {
                for (int i = a; i < b; i += 1)
                {
                    if (i % 2 == 0)
                        ans += y;
                    else
                        ans += x;
                }
                cout << ans << endl;
            }
        }
    }
}