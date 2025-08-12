#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string target = "hello";
    int j = 0;

    for (char c : s) {
        if (c == target[j]) {
            j++;
            if (j ==5)
                break;
        }
    }

    if (j == 5)
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

//     string word;
//     bool found = false;
//     cin >> word;

//     int len = word.length();

//     for (int i = 0; i < (len - 4); i += 1)
//     {
//         if (word[i] == 'h' && word[i + 1] == 'e' && word[i + 2] == 'l' && word[i + 3] == 'l' && word[i + 4] == 'o')
//         {
//             found = true;
//             break;
//         }
//         else
//             continue;
//     }

//     if (found)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
// }