#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin >> n;

    int count = 0;
    for (char c : n)
    {
        if (c == '4' || c == '7')
            count++;
    }

    if (count == 4 || count == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}




// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     string n;
//     cin >> n;

//     vector<char> target = {'4', '7'};
//     // string number = to_string(n);
//     bool index = true;
//     long long int len = n.length();
//     for (long long int i = 0; i < len; i += 1)
//     {
//         if (n[i] != target[0] && n[i] != target[1])
//         {
//             index = false;
//             break;
//         }
//         else
//             continue;
//     }
//     if (index)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
// }