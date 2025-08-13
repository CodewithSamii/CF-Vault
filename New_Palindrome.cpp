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
        string s;
        cin >> s;
        int n = s.size();
        bool found = false;

        for (int i = 1; i < n / 2; i++)
        {
            if (s[i] != s[0])
            {
                found = true;
                break;
            }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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
//         string input;
//         cin >> input;
//         string reserve;
//         for (char ch : input)
//             reserve.push_back(ch);

//         int half = input.length() / 2; /// half = 3
//         // vector<string> palin(len);
//         /// First half swap:
//         int j = 0;
//         for (int i = 0; i < half / 2; i += 1)
//         {
//             swap(input[j], input[half - i - 1]);
//             j++;
//         }
//         // for (char ch : input)
//         //     cout << ch;
//         // cout << endl;
//         int k = half + 1;         /// k = 4
//         int len = input.length(); /// len = 7;
//         // cout << len << endl;
//         /// Second half swap:
//         int x = 0;
//         for (int i = half; i > half / 2; i -= 1)
//         {
//             if (len % 2 != 0)
//             {
//                 swap(input[k], input[len - x - 1]);
//                 k++;
//                 x++;
//             }
//             else
//             {
//                 swap(input[k - 1], input[len - x - 1]);
//                 k++;
//                 x++;
//             }
//         }
//         // for (char ch : input)
//         //     cout << ch;
//         // cout << endl; /// abba - baba
//         /// Palindrome Check:
//         bool palindrome = true;
//         for (int i = 0; i < half; i += 1)
//         {
//             if (input[i] == input[len - i - 1])
//                 continue;
//             else
//             {
//                 palindrome = false;
//                 break;
//             }
//         }
//         /// Similarities Check:
//         bool similar = true;
//         for (int i = 0; i < len; i += 1)
//         {
//             if (input[i] == reserve[i])
//                 continue;
//             else
//             {
//                 similar = false;
//                 break;
//             }
//         }
//         if (palindrome && !similar)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
// }